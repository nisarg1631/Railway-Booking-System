// Nisarg Upadhyaya
// 19CS30031

#include "Booking.h"
#include "BookingCategory.h"
#include "Station.h"
#include "Date.h"

void RunExceptionalTests(){
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("", "", ""), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "00/00/0000",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "1234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "abcdefghij",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Dehradun", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Mumbai", "Dehradun", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Mumbai", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "10/04/2021",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "08/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "10/04/2022", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::Tatkal::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::PremiumTatkal::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::Divyaang::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "08/04/2008",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::Ladies::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "08/04/1962",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::SeniorCitizen::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "08/04/1964",
        Gender::Female::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::SeniorCitizen::Type());
    }
    catch(const Bad_Passenger& e){
        cout<<e.what()<<endl;
    }
    catch(const Bad_Booking &e){
        cout<<e.what()<<endl;
    }
    Booking::PrintBookings(); // print all bookings
    Booking::ClearBookings(); // clear all bookings
}

int main(){
    RunExceptionalTests();
    return 0;
}