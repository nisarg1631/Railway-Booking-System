// Nisarg Upadhyaya
// 19CS30031

#include "Booking.h"
#include "BookingCategory.h"
#include "Station.h"
#include "Date.h"

void RunGivenTests(){
    Passenger p1(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
    Passenger p2(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Female::Type()));
    Passenger p3(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type(),
        Divyaang::Blind::Type()));
    Passenger p4(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type(),
        Divyaang::CancerPatient::Type()));
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p1, BookingClasses::AC3Tier::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p1, BookingClasses::ACFirstClass::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p1, BookingClasses::AC3Tier::Type(), BookingCategory::SeniorCitizen::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p2, BookingClasses::ACFirstClass::Type(), BookingCategory::SeniorCitizen::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p3, BookingClasses::AC3Tier::Type(), BookingCategory::Divyaang::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p4, BookingClasses::ACFirstClass::Type(), BookingCategory::Divyaang::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p1, BookingClasses::AC3Tier::Type(), BookingCategory::Tatkal::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Booking::MakeReservation("Chennai", "Bangalore", "11/04/2021", p1, BookingClasses::ACFirstClass::Type(), BookingCategory::Tatkal::Type());
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    Booking::PrintBookings(); // print all bookings
    Booking::ClearBookings(); // clear all bookings
}

int main(){
    RunGivenTests();
    // RunOwnTests();
    return 0;
}