#include "BookingClasses.h"

//class BookingClasses

BookingClasses::BookingClasses(const string &name, const bool &isAC, const bool &IsLuxury, const double &loadFactor) : name_(name), isAC_(isAC), isLuxury_(IsLuxury), loadFactor_(loadFactor) {}
BookingClasses::~BookingClasses() {}

//class SittingClasses

SittingClasses::SittingClasses(const string &name, const bool &isAC, const bool &IsLuxury, const double &loadFactor) : BookingClasses(name, isAC, IsLuxury, loadFactor) {}
SittingClasses::~SittingClasses() {}

//class SleepingClasses

SleepingClasses::SleepingClasses(const string &name, const bool &isAC, const bool &IsLuxury, const double &loadFactor) : BookingClasses(name, isAC, IsLuxury, loadFactor) {}
SleepingClasses::~SleepingClasses() {}

//class Sleeping2Tier

Sleeping2Tier::Sleeping2Tier(const string &name, const bool &isAC, const bool &IsLuxury, const double &loadFactor) : SleepingClasses(name, isAC, IsLuxury, loadFactor) {}
Sleeping2Tier::~Sleeping2Tier() {}

//class Sleeping3Tier

Sleeping3Tier::Sleeping3Tier(const string &name, const bool &isAC, const bool &IsLuxury, const double &loadFactor) : SleepingClasses(name, isAC, IsLuxury, loadFactor) {}
Sleeping3Tier::~Sleeping3Tier() {}

//class ACFirstClass

ACFirstClass::ACFirstClass() : Sleeping2Tier(sName, sIsAC, sIsLuxury, sLoadFactor) {}
ACFirstClass::~ACFirstClass() {}

const string ACFirstClass::sName = "AC First Class";
const bool ACFirstClass::sIsAC = true;

const ACFirstClass &ACFirstClass::Type(){
    static const ACFirstClass sACFirstClass;
    return sACFirstClass;
}

//class AC2Tier

AC2Tier::AC2Tier() : Sleeping2Tier(sName, sIsAC, sIsLuxury, sLoadFactor) {}
AC2Tier::~AC2Tier() {}

const string AC2Tier::sName = "AC 2 Tier";
const bool AC2Tier::sIsAC = true;

const AC2Tier &AC2Tier::Type(){
    static const AC2Tier sAC2Tier;
    return sAC2Tier;
}

//class FirstClass

FirstClass::FirstClass() : Sleeping2Tier(sName, sIsAC, sIsLuxury, sLoadFactor) {}
FirstClass::~FirstClass() {}

const string FirstClass::sName = "First Class";
const bool FirstClass::sIsAC = false;

const FirstClass &FirstClass::Type(){
    static const FirstClass sFirstClass;
    return sFirstClass;
}

//class AC3Tier

AC3Tier::AC3Tier() : Sleeping3Tier(sName, sIsAC, sIsLuxury, sLoadFactor) {}
AC3Tier::~AC3Tier() {}

const string AC3Tier::sName = "AC 3 Tier";
const bool AC3Tier::sIsAC = true;

const AC3Tier &AC3Tier::Type(){
    static const AC3Tier sAC3Tier;
    return sAC3Tier;
}

//class ACChairCar

ACChairCar::ACChairCar() : SittingClasses(sName, sIsAC, sIsLuxury, sLoadFactor) {}
ACChairCar::~ACChairCar() {}

const string ACChairCar::sName = "AC Chair Car";
const bool ACChairCar::sIsAC = true;

const ACChairCar &ACChairCar::Type(){
    static const ACChairCar sACChairCar;
    return sACChairCar;
}

//class Sleeper

Sleeper::Sleeper() : Sleeping3Tier(sName, sIsAC, sIsLuxury, sLoadFactor) {}
Sleeper::~Sleeper() {}

const string Sleeper::sName = "Sleeper";
const bool Sleeper::sIsAC = false;

const Sleeper &Sleeper::Type(){
    static const Sleeper sSleeper;
    return sSleeper;
}

//class SecondSitting

SecondSitting::SecondSitting() : SittingClasses(sName, sIsAC, sIsLuxury, sLoadFactor) {}
SecondSitting::~SecondSitting() {}

const string SecondSitting::sName = "Second Sitting";
const bool SecondSitting::sIsAC = false;

const SecondSitting &SecondSitting::Type(){
    static const SecondSitting sSecondSitting;
    return sSecondSitting;
}