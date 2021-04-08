// Nisarg Upadhyaya
// 19CS30031

#ifndef _BOOKINGCATEGORY_H
#define _BOOKINGCATEGORY_H

#include <iostream>
#include <string>

using namespace std;

#include "Categories.h"

// forward declarations
class Passenger;
class Station;
class Date;
class BookingClasses;

// generic BookingCategory type to generate different bookings
template<typename T>
class BookingCategoryTypes;

class BookingCategory{
    private:
        const string &name_;

        // blocked copy constructor and copy assignment operator
        BookingCategory(const BookingCategory &);
        BookingCategory &operator=(const BookingCategory &);

    protected:
        // protected constructor and destructor visible to sub-types only
        BookingCategory(const string &);
        virtual ~BookingCategory();
    
    public:
        string GetName() const;

        // virtual functions, implemented in BookingCategoryTypes with appropriate logic
        virtual void MakeReservation(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &) const = 0;
        virtual bool CheckEligibility(const Passenger &) const = 0;

        // enumerated types
        typedef BookingCategoryTypes<Categories::GeneralType> General;
        typedef BookingCategoryTypes<Categories::LadiesType> Ladies;
        typedef BookingCategoryTypes<Categories::SeniorCitizenType> SeniorCitizen;
        typedef BookingCategoryTypes<Categories::DivyaangType> Divyaang;
        typedef BookingCategoryTypes<Categories::TatkalType> Tatkal;
        typedef BookingCategoryTypes<Categories::PremiumTatkalType> PremiumTatkal;

};

// derived classes (singletons)
template<typename T>
class BookingCategoryTypes : public BookingCategory{
    private:
        static const string sName;

        // private constructor and destructor
        BookingCategoryTypes();
        ~BookingCategoryTypes();
    
    public:
        // singleton object
        static const BookingCategoryTypes<T> &Type();

        void MakeReservation(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &) const;
        bool CheckEligibility(const Passenger &) const;

        // unit testing function
        static void UnitTest();
};

// booking category types implementations
template<typename T> BookingCategoryTypes<T>::BookingCategoryTypes(): BookingCategory(sName) {}
template<typename T> BookingCategoryTypes<T>::~BookingCategoryTypes() {}
template<typename T> inline const BookingCategoryTypes<T> &BookingCategoryTypes<T>::Type(){
    static const BookingCategoryTypes<T> sBookingCategory;
    return sBookingCategory;
}

// inline functions for getting information about the class
inline string BookingCategory::GetName() const{
    return name_;
}

#endif
