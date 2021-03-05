#include <iostream>

using namespace std;

#include "BookingClasses.h"
#include "Railways.h"
#include "Booking.h"
#include "Station.h"
#include "Date.h"

void BookingApplication() {
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


void debug_bookingclasses(const BookingClasses &);
void debug_bookingclasses(){
    debug_bookingclasses(ACFirstClass::Type());
    debug_bookingclasses(AC2Tier::Type());
    debug_bookingclasses(FirstClass::Type());
    debug_bookingclasses(AC3Tier::Type());
    debug_bookingclasses(ACChairCar::Type());
    debug_bookingclasses(Sleeper::Type());
    debug_bookingclasses(SecondSitting::Type());
}

void debug_railways(const Railways &);
void debug_railways(){
    debug_railways(Railways::IndianRailways());
}

int main(){
    // debug_bookingclasses();
    // cout<<endl;
    // debug_railways();
    BookingApplication();
    return 0;
}