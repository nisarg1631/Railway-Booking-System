// Nisarg Upadhyaya
// 19CS30031

#include "Booking.h"
#include "BookingCategory.h"
#include <cmath>

uint32_t Booking::sBookingPNRSerial = 1; //initialise static PNR serial with 1 at start of program
vector<Booking *> Booking::sBookings;

// booking implementations
Booking::Booking(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) : fromStation_(fromStation), toStation_(toStation), dateOfBooking_(dateOfBooking), dateOfReservation_(dateOfReservation), passenger_(passenger), bookingClass_(bookingClass), pnr_(sBookingPNRSerial++) {}
Booking::~Booking() {}

void Booking::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass, const BookingCategory &bookingCategory){
    // check passenger birthdate must be before date of reservation
    // check date of booking should be greater than and must be within one year from date of reservation
    // check passenger eligibility in category
    bookingCategory.MakeReservation(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass);
}

void Booking::PrintBookings(){
    // print all bookings from sBookings
}

// booking  types implementations
template<typename T> BookingTypes<T>::BookingTypes(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass, const string &category): Booking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass){
    bookingStatus_ = true;
    bookingMessage_ = category + " booking succeeded.";
    fare_ = ComputeFare();
    sBookings.push_back(this); //store the pointer to the present booking in sBookings
}
template<typename T> BookingTypes<T>::~BookingTypes() {}

// compute fares for different sub-types implemented based on the logic provided
template<> uint32_t Booking::GeneralBooking::ComputeFare() const{
    double fare = 0.0;
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::LadiesBooking::ComputeFare() const{
    double fare = 0.0;
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::SeniorCitizenBooking::ComputeFare() const{
    double fare = 0.0;
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::DivyaangBooking::ComputeFare() const{
    double fare = 0.0;
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::TatkalBooking::ComputeFare() const{
    double fare = 0.0;
    return static_cast<uint32_t>(round(fare));
}
template<> uint32_t Booking::PremiumTatkalBooking::ComputeFare() const{
    double fare = 0.0;
    return static_cast<uint32_t>(round(fare));
}

ostream &operator<<(ostream &os, const Booking &obj){
    os<<obj.bookingMessage_<<":"<<endl;
    os<<"PNR Number = "<<obj.pnr_<<endl;
    os<<"From Station = "<<obj.fromStation_.GetName()<<endl;
    os<<"To Station = "<<obj.toStation_.GetName()<<endl;
    os<<"Travel Date = "<<obj.dateOfBooking_<<endl;
    os<<"Travel Class = "<<obj.bookingClass_.GetName()<<endl;
    os<<"\t-Mode: "<<(obj.bookingClass_.IsSitting() ? "Sitting" : "Sleeping")<<endl;
    os<<"\t-Comfort: "<<(obj.bookingClass_.IsAC() ? "AC" : "Non-AC")<<endl;
    os<<"\t-Bunks: "<<obj.bookingClass_.GetNumberOfTiers()<<endl;
    os<<"\t-Luxury: "<<(obj.bookingClass_.IsLuxury() ? "Yes" : "No")<<endl;
    os<<"Fare = "<<obj.fare_<<endl;
    os<<endl;
    return os;
}
