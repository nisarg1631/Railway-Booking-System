#include "BookingClasses.h"

//class BookingClasses

BookingClasses::BookingClasses(const string &name, const bool &isAC) : name_(name), isAC_(isAC) {}
BookingClasses::~BookingClasses() {}

ostream &operator<<(ostream &os, const BookingClasses &obj){
    os<<obj.name_<<endl;
    os<<"\t-Is AC: "<<(obj.isAC_ ? "Yes" : "No")<<endl;
    os<<"\t-Is Sitting: "<<(obj.IsSitting() ? "Yes" : "No")<<endl;
    os<<"\t-Is Luxury: "<<(obj.IsLuxury() ? "Yes" : "No")<<endl;
    os<<"\t-Tiers: "<<obj.GetNumberOfTiers()<<endl;
    os<<"\t-Load Factor: "<<obj.GetLoadFactor();
    return os;
}

//class SittingClasses

SittingClasses::SittingClasses(const string &name, const bool &isAC) : BookingClasses(name, isAC) {}
SittingClasses::~SittingClasses() {}

//class SleepingClasses

SleepingClasses::SleepingClasses(const string &name, const bool &isAC) : BookingClasses(name, isAC) {}
SleepingClasses::~SleepingClasses() {}

//class Sleeping2Tier

Sleeping2Tier::Sleeping2Tier(const string &name, const bool &isAC) : SleepingClasses(name, isAC) {}
Sleeping2Tier::~Sleeping2Tier() {}

//class Sleeping3Tier

Sleeping3Tier::Sleeping3Tier(const string &name, const bool &isAC) : SleepingClasses(name, isAC) {}
Sleeping3Tier::~Sleeping3Tier() {}

//class ACFirstClass

ACFirstClass::ACFirstClass() : Sleeping2Tier("AC First Class", true) {}
ACFirstClass::~ACFirstClass() {}

const ACFirstClass &ACFirstClass::Type(){
    static const ACFirstClass sACFirstClass;
    return sACFirstClass;
}

//class AC2Tier

AC2Tier::AC2Tier() : Sleeping2Tier("AC 2 Tier", true) {}
AC2Tier::~AC2Tier() {}

const AC2Tier &AC2Tier::Type(){
    static const AC2Tier sAC2Tier;
    return sAC2Tier;
}

//class FirstClass

FirstClass::FirstClass() : Sleeping2Tier("First Class", false) {}
FirstClass::~FirstClass() {}

const FirstClass &FirstClass::Type(){
    static const FirstClass sFirstClass;
    return sFirstClass;
}

//class AC3Tier

AC3Tier::AC3Tier() : Sleeping3Tier("AC 3 Tier", true) {}
AC3Tier::~AC3Tier() {}

const AC3Tier &AC3Tier::Type(){
    static const AC3Tier sAC3Tier;
    return sAC3Tier;
}

//class ACChairCar

ACChairCar::ACChairCar() : SittingClasses("AC Chair Car", true) {}
ACChairCar::~ACChairCar() {}

const ACChairCar &ACChairCar::Type(){
    static const ACChairCar sACChairCar;
    return sACChairCar;
}

//class Sleeper

Sleeper::Sleeper() : Sleeping3Tier("Sleeper", false) {}
Sleeper::~Sleeper() {}

const Sleeper &Sleeper::Type(){
    static const Sleeper sSleeper;
    return sSleeper;
}

//class SecondSitting

SecondSitting::SecondSitting() : SittingClasses("Second Sitting", false) {}
SecondSitting::~SecondSitting() {}

const SecondSitting &SecondSitting::Type(){
    static const SecondSitting sSecondSitting;
    return sSecondSitting;
}