#include "BookingClasses.h"
#include "Booking.h"
#include "Station.h"
#include "Date.h"

void RunGivenTests(){
    Booking b1(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), ACFirstClass::Type());
    Booking b2(Station("Kolkata"), Station("Delhi"), Date(5, 3, 2021), AC2Tier::Type());
    Booking b3(Station("Mumbai"), Station("Kolkata"), Date(17, 3, 2021), FirstClass::Type());
    Booking b4(Station("Mumbai"), Station("Delhi"), Date(23, 3, 2021), AC3Tier::Type());
    Booking b5(Station("Chennai"), Station("Delhi"), Date(25, 4, 2021), ACChairCar::Type());
    Booking b6(Station("Chennai"), Station("Kolkata"), Date(7, 5, 2021), Sleeper::Type());
    Booking b7(Station("Mumbai"), Station("Delhi"), Date(19, 5, 2021), SecondSitting::Type());
    Booking b8(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), SecondSitting::Type());
    
    vector<Booking*>::iterator it;
    for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it)
        cout << *(*it);
}

void RunOwnTests(){
    // All class bookings from Delhi to Chennai
    Booking b1(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), ACFirstClass::Type());
    Booking b2(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), AC2Tier::Type());
    Booking b3(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), FirstClass::Type());
    Booking b4(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), AC3Tier::Type());
    Booking b5(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), ACChairCar::Type());
    Booking b6(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b7(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), SecondSitting::Type());

    // All possible ordered pairs of stations in Sleeper
    Booking b8(Station("Mumbai"), Station("Delhi"), Date(16, 3, 2021), Sleeper::Type());
    Booking b9(Station("Mumbai"), Station("Bangalore"), Date(16, 3, 2021), Sleeper::Type());
    Booking b10(Station("Mumbai"), Station("Kolkata"), Date(16, 3, 2021), Sleeper::Type());
    Booking b11(Station("Mumbai"), Station("Chennai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b12(Station("Delhi"), Station("Mumbai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b13(Station("Delhi"), Station("Bangalore"), Date(16, 3, 2021), Sleeper::Type());
    Booking b14(Station("Delhi"), Station("Kolkata"), Date(16, 3, 2021), Sleeper::Type());
    Booking b15(Station("Delhi"), Station("Chennai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b16(Station("Bangalore"), Station("Mumbai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b17(Station("Bangalore"), Station("Delhi"), Date(16, 3, 2021), Sleeper::Type());
    Booking b18(Station("Bangalore"), Station("Kolkata"), Date(16, 3, 2021), Sleeper::Type());
    Booking b19(Station("Bangalore"), Station("Chennai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b20(Station("Kolkata"), Station("Mumbai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b21(Station("Kolkata"), Station("Delhi"), Date(16, 3, 2021), Sleeper::Type());
    Booking b22(Station("Kolkata"), Station("Bangalore"), Date(16, 3, 2021), Sleeper::Type());
    Booking b23(Station("Kolkata"), Station("Chennai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b24(Station("Chennai"), Station("Mumbai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b25(Station("Chennai"), Station("Delhi"), Date(16, 3, 2021), Sleeper::Type());
    Booking b26(Station("Chennai"), Station("Bangalore"), Date(16, 3, 2021), Sleeper::Type());
    Booking b27(Station("Chennai"), Station("Kolkata"), Date(16, 3, 2021), Sleeper::Type()); 

    vector<Booking*>::iterator it;
    for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it)
        cout << *(*it);
}

int main(){
    // call the test application function here
    RunGivenTests();
    // RunOwnTests();
    return 0;
}