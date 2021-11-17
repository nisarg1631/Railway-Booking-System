// Nisarg Upadhyaya
// 19CS30031

#include "Booking.h"
#include "Concession.h"
#include "BookingCategory.h"
#include "Railways.h"
#include "Exceptions.h"
#include <cmath>

uint32_t Booking::sBookingPNRSerial = 1; //initialise static PNR serial with 1 at start of program
vector<Booking *> Booking::sBookings;

// booking implementations
Booking::Booking(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) : fromStation_(fromStation), toStation_(toStation), dateOfBooking_(dateOfBooking), dateOfReservation_(dateOfReservation), passenger_(passenger), bookingClass_(bookingClass), pnr_(sBookingPNRSerial++) {}
Booking::~Booking() {}

void Booking::MakeReservation(const string &fromSt, const string &toSt, const string &dateOfB, const Passenger &passenger, const BookingClasses &bookingClass, const BookingCategory &bookingCategory){
    try{
        const Station &fromStation = Railways::IndianRailways().GetStation(fromSt);
        const Station &toStation = Railways::IndianRailways().GetStation(toSt);
        Date dateOfBooking(Date::CreateDate(dateOfB));
        Date dateOfReservation(Date::Today);

        if(fromStation.GetName() == toStation.GetName()) // check for same stations
            throw Same_Stations();

        if(!(passenger.GetDateOfBirth() < dateOfReservation)) // check date of birth
            throw Invalid_Birth_Date();

        // check date of booking should be greater than and must be within one year from date of reservation
        tuple<uint32_t, uint32_t, uint32_t> diff = dateOfBooking - dateOfReservation;
        uint32_t date_diff = get<0>(diff), month_diff = get<1>(diff), year_diff = get<2>(diff);

        if((!(dateOfBooking > dateOfReservation)) || (year_diff > 1) || ((year_diff==1) && ((month_diff>0) || (date_diff>0))))
            throw Invalid_Booking_Date();

        bool eligible = bookingCategory.CheckEligibility(passenger); // check passenger eligibility in category
        if(eligible)
            sBookings.push_back(bookingCategory.MakeReservation(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass));
    }
    catch(const Invalid_Station_Input &e){
        cout<<e.what()<<endl;
        throw Invalid_Station_Input();
    }
    catch(const Bad_Date &e){
        cout<<e.what()<<endl;
        throw Invalid_Date_Input();
    }
    catch(const Invalid_Date_Input &e){
        cout<<e.what()<<endl;
        throw Invalid_Date_Input();
    }
    catch(const Ineligible_Passenger &e){
        cout<<e.what()<<endl;
        throw Ineligible_Passenger();
    }
}

void Booking::PrintBookings(){
    vector<Booking *>::iterator it;
    for(it = Booking::sBookings.begin(); it != Booking::sBookings.end(); it++)
        cout<<*(*it);
}

void Booking::ClearBookings(){
    vector<Booking *>::iterator it;
    for(it = Booking::sBookings.begin(); it != Booking::sBookings.end(); it++)
        delete *it;
    sBookings.clear();
}

// compute fares for different sub-types implemented based on the logic provided
template<> uint32_t Booking::GeneralBooking::ComputeFare() const{
    double fare = 0.0;
    uint32_t distance = fromStation_.GetDistance(toStation_);
    fare += (static_cast<double>(distance) * sBaseFarePerKM); // base fare
    fare *= bookingClass_.GetLoadFactor(); // loaded fare

    fare = fare * (1.0 - GeneralConcession::Type().GetConcessionFactor()); // general concession, this doesn't make any difference and can be removed, added for uniformity

    fare += bookingClass_.GetReservationCharge(); // added reservation charges
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::LadiesBooking::ComputeFare() const{
    double fare = 0.0;
    uint32_t distance = fromStation_.GetDistance(toStation_);
    fare += (static_cast<double>(distance) * sBaseFarePerKM); // base fare
    fare *= bookingClass_.GetLoadFactor(); // loaded fare

    fare = fare * (1.0 - LadiesConcession::Type().GetConcessionFactor(passenger_)); // ladies concession, for now this doesn't make any difference as ladies concession factor is 0

    fare += bookingClass_.GetReservationCharge(); // added reservation charges
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::SeniorCitizenBooking::ComputeFare() const{
    double fare = 0.0;
    uint32_t distance = fromStation_.GetDistance(toStation_);
    fare += (static_cast<double>(distance) * sBaseFarePerKM); // base fare
    fare *= bookingClass_.GetLoadFactor(); // loaded fare

    fare = fare * (1.0 - SeniorCitizenConcession::Type().GetConcessionFactor(passenger_)); // senior citizen concession

    fare += bookingClass_.GetReservationCharge(); // added reservation charges
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::DivyaangBooking::ComputeFare() const{
    double fare = 0.0;
    uint32_t distance = fromStation_.GetDistance(toStation_);
    fare += (static_cast<double>(distance) * sBaseFarePerKM); // base fare
    fare *= bookingClass_.GetLoadFactor(); // loaded fare

    fare = fare * (1.0 - DivyaangConcession::Type().GetConcessionFactor(passenger_, bookingClass_)); // divyaang concession

    fare += bookingClass_.GetReservationCharge(); // added reservation charges
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::TatkalBooking::ComputeFare() const{
    double fare = 0.0;
    uint32_t distance = fromStation_.GetDistance(toStation_);
    fare += (static_cast<double>(distance) * sBaseFarePerKM); // base fare
    fare *= bookingClass_.GetLoadFactor(); // loaded fare

    double premiumFare = 0.0;
    if(distance >= bookingClass_.GetMinimumTatkalDistance()){ // minimum distance cap
        premiumFare = max(fare*bookingClass_.GetTatkalLoadFactor(), bookingClass_.GetMinimumTatkalCharge()); // minimum cap
        premiumFare = min(premiumFare, bookingClass_.GetMaximumTatkalCharge()); // maximum cap
    }

    fare += premiumFare; // added tatkal charges
    fare += bookingClass_.GetReservationCharge(); // added reservation charges
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::PremiumTatkalBooking::ComputeFare() const{
    double fare = 0.0;
    uint32_t distance = fromStation_.GetDistance(toStation_);
    fare += (static_cast<double>(distance) * sBaseFarePerKM); // base fare
    fare *= bookingClass_.GetLoadFactor(); // loaded fare

    double premiumFare = 0.0;
    if(distance >= bookingClass_.GetMinimumTatkalDistance()){ // minimum distance cap
        premiumFare = max(fare*bookingClass_.GetTatkalLoadFactor(), bookingClass_.GetMinimumTatkalCharge()); // minimum cap
        premiumFare = min(premiumFare, bookingClass_.GetMaximumTatkalCharge()); // maximum cap
    }
    premiumFare *= 2.0; // double premium fare for premium tatkal

    fare += premiumFare; // added tatkal charges
    fare += bookingClass_.GetReservationCharge(); // added reservation charges
    return static_cast<uint32_t>(round(fare));
}

ostream &operator<<(ostream &os, const Booking &obj){
    os<<string(20,'#')<<" BOOKING START "<<string(20,'#')<<'\n'<<endl;
    os<<"Booking Message = "<<obj.bookingMessage_<<endl;
    os<<"PNR Number = "<<obj.pnr_<<endl;
    os<<"From Station = "<<obj.fromStation_.GetName()<<endl;
    os<<"To Station = "<<obj.toStation_.GetName()<<endl;
    os<<"Reservation Date = "<<obj.dateOfReservation_<<endl;
    os<<"Travel Date = "<<obj.dateOfBooking_<<endl;
    os<<"Travel Class = "<<obj.bookingClass_.GetName()<<endl;
    os<<"\t-Mode: "<<(obj.bookingClass_.IsSitting() ? "Sitting" : "Sleeping")<<endl;
    os<<"\t-Comfort: "<<(obj.bookingClass_.IsAC() ? "AC" : "Non-AC")<<endl;
    os<<"\t-Bunks: "<<obj.bookingClass_.GetNumberOfTiers()<<endl;
    os<<"\t-Luxury: "<<(obj.bookingClass_.IsLuxury() ? "Yes" : "No")<<endl;
    os<<"Passenger Details"<<endl;
    os<<obj.passenger_<<endl;
    os<<"Fare = "<<obj.fare_<<'\n'<<endl;
    os<<string(21,'#')<<" BOOKING END "<<string(21,'#')<<'\n'<<endl;
    return os;
}
