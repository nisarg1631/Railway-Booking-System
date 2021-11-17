// Nisarg Upadhyaya
// 19CS30031

#include "Booking.h"
#include "BookingCategory.h"
#include "Station.h"
#include "Date.h"

void RunHappyTests1(){
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::ACFirstClass::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::ExecutiveChairCar::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::AC2Tier::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::FirstClass::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::AC3Tier::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::ACChairCar::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::Sleeper::Type(), BookingCategory::General::Type());
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
        Booking::MakeReservation("Delhi", "Chennai", "11/04/2021", p, BookingClasses::SecondSitting::Type(), BookingCategory::General::Type());
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

void RunHappyTests2(){
    Booking::PrintBookings(); // print all bookings
    Booking::ClearBookings(); // clear all bookings
}

void RunHappyTests3(){
    try{
        Passenger p(Passenger::CreatePassenger(
        Name::CreateName("Test", "", "Passenger"), 
        "123456781234",
        "9876543210",
        "16/03/2001",
        Gender::Female::Type()));
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
        "08/04/2010",
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
        "08/04/1961",
        Gender::Male::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::ACFirstClass::Type(), BookingCategory::SeniorCitizen::Type());
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
        "08/04/1963",
        Gender::Female::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "11/04/2021", p, BookingClasses::ACFirstClass::Type(), BookingCategory::SeniorCitizen::Type());
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::Blind::Type()));
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::OrthopaedicallyHandicaped::Type()));
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::CancerPatient::Type()));
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
        Booking::MakeReservation("Chennai", "Bangalore", "10/04/2021", p, BookingClasses::ACFirstClass::Type(), BookingCategory::Tatkal::Type());
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "10/04/2021", p, BookingClasses::AC3Tier::Type(), BookingCategory::Tatkal::Type());
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
        Booking::MakeReservation("Bangalore", "Mumbai", "10/04/2021", p, BookingClasses::AC3Tier::Type(), BookingCategory::Tatkal::Type());
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
        Booking::MakeReservation("Chennai", "Bangalore", "10/04/2021", p, BookingClasses::ACFirstClass::Type(), BookingCategory::PremiumTatkal::Type());
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
        Booking::MakeReservation("Delhi", "Mumbai", "10/04/2021", p, BookingClasses::AC3Tier::Type(), BookingCategory::PremiumTatkal::Type());
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
        "08/04/1961",
        Gender::Male::Type(),
        Divyaang::TBPatient::Type()));
        Booking::MakeReservation("Bangalore", "Mumbai", "10/04/2021", p, BookingClasses::AC3Tier::Type(), BookingCategory::PremiumTatkal::Type());
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
    RunHappyTests1();
    RunHappyTests2();
    RunHappyTests3();
    return 0;
}