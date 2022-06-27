// Nisarg Upadhyaya
// 19CS30031

#include "BookingClasses.h"

// class BookingClasses

BookingClasses::BookingClasses(const string &name) : name_(name) {
    //checking constructor
    #ifdef _DEBUG
    cout<<"Booking class "<<GetName()<<" created."<<endl;
    #endif
}
BookingClasses::~BookingClasses() {
    //checking destructor
    #ifdef _DEBUG
    cout<<"Booking class "<<GetName()<<" destructed."<<endl;
    #endif
}

ostream &operator<<(ostream &os, const BookingClasses &obj){
    os<<obj.GetName()<<endl;
    os<<"\t-Is AC: "<<(obj.IsAC() ? "Yes" : "No")<<endl;
    os<<"\t-Is Sitting: "<<(obj.IsSitting() ? "Yes" : "No")<<endl;
    os<<"\t-Is Luxury: "<<(obj.IsLuxury() ? "Yes" : "No")<<endl;
    os<<"\t-Tiers: "<<obj.GetNumberOfTiers()<<endl;
    os<<"\t-Load Factor: "<<obj.GetLoadFactor()<<endl;
    os<<"\t-Reservation Charge: "<<obj.GetReservationCharge()<<endl;
    os<<"\t-Tatkal Load Factor: "<<obj.GetTatkalLoadFactor()<<endl;
    os<<"\t-Minimum Tatkal Charge: "<<obj.GetMinimumTatkalCharge()<<endl;
    os<<"\t-Maximum Tatkal Charge: "<<obj.GetMaximumTatkalCharge()<<endl;
    os<<"\t-Minimum Tatkal Distance: "<<obj.GetMinimumTatkalDistance();
    return os;
}

// unchangeable parameters of various Booking Classes
template<> const string BookingClasses::ACFirstClass::sName = "AC First Class";
template<> const bool BookingClasses::ACFirstClass::sAC = true;
template<> const bool BookingClasses::ACFirstClass::sSitting = false;
template<> const uint32_t BookingClasses::ACFirstClass::sNumberOfTiers = 2U;

template<> const string BookingClasses::ExecutiveChairCar::sName = "Executive Chair Car";
template<> const bool BookingClasses::ExecutiveChairCar::sAC = true;
template<> const bool BookingClasses::ExecutiveChairCar::sSitting = true;
template<> const uint32_t BookingClasses::ExecutiveChairCar::sNumberOfTiers = 0U;

template<> const string BookingClasses::AC2Tier::sName = "AC 2 Tier";
template<> const bool BookingClasses::AC2Tier::sAC = true;
template<> const bool BookingClasses::AC2Tier::sSitting = false;
template<> const uint32_t BookingClasses::AC2Tier::sNumberOfTiers = 2U;

template<> const string BookingClasses::FirstClass::sName = "First Class";
template<> const bool BookingClasses::FirstClass::sAC = false;
template<> const bool BookingClasses::FirstClass::sSitting = false;
template<> const uint32_t BookingClasses::FirstClass::sNumberOfTiers = 2U;

template<> const string BookingClasses::AC3Tier::sName = "AC 3 Tier";
template<> const bool BookingClasses::AC3Tier::sAC = true;
template<> const bool BookingClasses::AC3Tier::sSitting = false;
template<> const uint32_t BookingClasses::AC3Tier::sNumberOfTiers = 3U;

template<> const string BookingClasses::ACChairCar::sName = "AC Chair Car";
template<> const bool BookingClasses::ACChairCar::sAC = true;
template<> const bool BookingClasses::ACChairCar::sSitting = true;
template<> const uint32_t BookingClasses::ACChairCar::sNumberOfTiers = 0U;

template<> const string BookingClasses::Sleeper::sName = "Sleeper";
template<> const bool BookingClasses::Sleeper::sAC = false;
template<> const bool BookingClasses::Sleeper::sSitting = false;
template<> const uint32_t BookingClasses::Sleeper::sNumberOfTiers = 3U;

template<> const string BookingClasses::SecondSitting::sName = "Second Sitting";
template<> const bool BookingClasses::SecondSitting::sAC = false;
template<> const bool BookingClasses::SecondSitting::sSitting = true;
template<> const uint32_t BookingClasses::SecondSitting::sNumberOfTiers = 0U;
