#include <iostream>

using namespace std;

#include "BookingClasses.h"
#include "Railways.h"
#include "Booking.h"

const bool ACFirstClass::sIsLuxury = true;
const double ACFirstClass::sLoadFactor = 3.00;

const bool AC2Tier::sIsLuxury = false;
const double AC2Tier::sLoadFactor = 2.00;

const bool FirstClass::sIsLuxury = true;
const double FirstClass::sLoadFactor = 2.00;

const bool AC3Tier::sIsLuxury = false;
const double AC3Tier::sLoadFactor = 1.75;

const bool ACChairCar::sIsLuxury = false;
const double ACChairCar::sLoadFactor = 1.25;

const bool Sleeper::sIsLuxury = false;
const double Sleeper::sLoadFactor = 1.00;

const bool SecondSitting::sIsLuxury = false;
const double SecondSitting::sLoadFactor = 0.50;

const double Booking::sBaseFarePerKM = 0.50;
const double Booking::sACSurcharge = 50.00;
const double Booking::sLuxuryTaxPercent = 25;

void debug_bookingclasses(const BookingClasses &obj){
    cout<<obj<<endl;
}

void debug_railways(const Railways &obj){
    cout<<obj<<endl;
}