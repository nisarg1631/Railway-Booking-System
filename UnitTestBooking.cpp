#include "Booking.h"

void Booking::UnitTestBooking(){
    // check the static constants
    if(abs(Booking::sBaseFarePerKM-0.5)>1e-6)
        cout<<"Incorrect sBaseFarePerKM in Booking."<<endl;
    if(abs(Booking::sACSurcharge-50.0)>1e-6)
        cout<<"Incorrect sACSurcharge in Booking."<<endl;
    if(abs(Booking::sLuxuryTaxPercent-25.0)>1e-6)
        cout<<"Incorrect sLuxuryTaxPercent in Booking."<<endl;

    // check that next available PNR is initially 1
    if(sBookingPNRSerial != 1)
        cout<<"Incorrect initialization of next available PNR in Booking."<<endl;

    // making a booking and checking its attributes as given in Testplan
    Booking booking(Station("Delhi"), Station("Mumbai"), Date(16,3,2021), AC3Tier::Type());
    if(booking.fromStation_.GetName() != "Delhi")
        cout<<"Incorrect fromStation_ in Booking."<<endl;
    if(booking.toStation_.GetName() != "Mumbai")
        cout<<"Incorrect toStation_ in Booking."<<endl;
    if(booking.date_.ToString() != "16/Mar/2021")
        cout<<"Incorrect date_ in Booking."<<endl;
    if(&booking.bookingClass_ != &AC3Tier::Type())
        cout<<"Incorrect bookingClass_ in Booking."<<endl;
    if(booking.fare_ != 1316)
        cout<<"Incorrect fare_ in Booking."<<endl;
    if(booking.pnr_ != 1)
        cout<<"Incorrect pnr_ in Booking."<<endl;
    if(booking.bookingStatus_ != true)
        cout<<"Incorrect bookingStatus_ in Booking."<<endl;
    if(booking.bookingMessage_ != "BOOKING SUCCEEDED")
        cout<<"Incorrect bookingMessage_ in Booking."<<endl;
    if(booking.ComputeFare() != 1316)
        cout<<"Incorrect fare computation by ComputeFare() in Booking."<<endl;

    // checking that the booking has been added to sBookings
    if(sBookings.empty() || (sBookings[0] != &booking))
        cout<<"Booking not added to static vector sBookings in Booking."<<endl;
    
    // checking that next available PNR is now updated
    if(sBookingPNRSerial != 2)
        cout<<"Next available PNR not updated in Booking."<<endl;
    
    // checking the output streaming operator
    cout<<booking<<endl;
    
}

int main(){
    Booking::UnitTestBooking();
    return 0;
}