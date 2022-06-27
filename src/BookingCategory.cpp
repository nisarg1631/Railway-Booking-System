// Nisarg Upadhyaya
// 19CS30031

#include "BookingCategory.h"

// initialise statics
template<> const string BookingCategory::General::sName = "General";
template<> const string BookingCategory::Ladies::sName = "Ladies";
template<> const string BookingCategory::SeniorCitizen::sName = "Senior Citizen";
template<> const string BookingCategory::Divyaang::sName = "Divyaang";
template<> const string BookingCategory::Tatkal::sName = "Tatkal";
template<> const string BookingCategory::PremiumTatkal::sName = "Premium Tatkal";

// class BookingCategory

BookingCategory::BookingCategory(const string &name) : name_(name) {
    //checking constructor
    #ifdef _DEBUG
    cout<<"Booking category "<<GetName()<<" created."<<endl;
    #endif
}
BookingCategory::~BookingCategory() {
    //checking destructor
    #ifdef _DEBUG
    cout<<"Booking category "<<GetName()<<" destructed."<<endl;
    #endif
}
