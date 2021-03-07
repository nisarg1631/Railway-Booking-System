// Nisarg Upadhyaya
// 19CS30031

#include "Booking.h"
#include <cmath>

uint32_t Booking::sBookingPNRSerial = 1; //initialise static PNR serial with 1 at start of program
vector<Booking *> Booking::sBookings;

Booking::Booking(const Station &fromStation, const Station &toStation, const Date &date, const BookingClasses &bookingClass, const Person *person) :
    fromStation_(fromStation), toStation_(toStation), date_(date), bookingClass_(bookingClass), pnr_(sBookingPNRSerial++) {
        bookingStatus_ = true;
        bookingMessage_ = "BOOKING SUCCEEDED";
        fare_ = ComputeFare();
        sBookings.push_back(this);
    }
Booking::~Booking() {}

uint32_t Booking::ComputeFare() const{
    double fare = 0.0;
    fare += (static_cast<double>(fromStation_.GetDistance(toStation_)) * sBaseFarePerKM);
    fare *= bookingClass_.GetLoadFactor();
    if(bookingClass_.IsAC())
        fare += sACSurcharge;
    if(bookingClass_.IsLuxury())
        fare += (fare * (sLuxuryTaxPercent/100));
    return static_cast<uint32_t>(round(fare));
}

ostream &operator<<(ostream &os, const Booking &obj){
    os<<obj.bookingMessage_<<":"<<endl;
    os<<"PNR Number = "<<obj.pnr_<<endl;
    os<<"From Station = "<<obj.fromStation_.GetName()<<endl;
    os<<"To Station = "<<obj.toStation_.GetName()<<endl;
    os<<"Travel Date = "<<obj.date_<<endl;
    os<<"Travel Class = "<<obj.bookingClass_.GetName()<<endl;
    os<<"\t-Mode: "<<(obj.bookingClass_.IsSitting() ? "Sitting" : "Sleeping")<<endl;
    os<<"\t-Comfort: "<<(obj.bookingClass_.IsAC() ? "AC" : "Non-AC")<<endl;
    os<<"\t-Bunks: "<<obj.bookingClass_.GetNumberOfTiers()<<endl;
    os<<"\t-Luxury: "<<(obj.bookingClass_.IsLuxury() ? "Yes" : "No")<<endl;
    os<<"Fare = "<<obj.fare_<<endl;
    os<<endl;
    return os;
}