// Nisarg Upadhyaya
// 19CS30031

#include "BookingCategory.h"

// class BookingClasses

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