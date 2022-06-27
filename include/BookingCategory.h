// Nisarg Upadhyaya
// 19CS30031

#ifndef _BOOKINGCATEGORY_H
#define _BOOKINGCATEGORY_H

#include <iostream>
#include <string>

using namespace std;

#include "Categories.h"
#include "Booking.h"
#include "Exceptions.h"

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
        virtual Booking *MakeReservation(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &) const = 0;
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

        Booking *MakeReservation(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &) const;
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

// GetName inlined
inline string BookingCategory::GetName() const{
    return name_;
}

// check eligibility functions for different sub-types inlined
template<> inline bool BookingCategory::General::CheckEligibility(const Passenger &passenger) const{
    return true;
}
template<> inline bool BookingCategory::Ladies::CheckEligibility(const Passenger &passenger) const{
    uint32_t age = get<2>(passenger.GetDateOfBirth()-Date::Today);
    if((!Gender::IsMale(passenger.GetGender())) || (age<12U))
        return true;
    throw Ladies_Ineligible();
}
template<> inline bool BookingCategory::SeniorCitizen::CheckEligibility(const Passenger &passenger) const{
    uint32_t age = get<2>(passenger.GetDateOfBirth()-Date::Today);
    if(((Gender::IsMale(passenger.GetGender())) && (age>=60U)) || ((!Gender::IsMale(passenger.GetGender())) && (age>=58U)))
        return true;
    throw Senior_Citizen_Ineligible();
}
template<> inline bool BookingCategory::Divyaang::CheckEligibility(const Passenger &passenger) const{
    if(passenger.GetDisabilityType().GetName() != "None")
        return true;
    throw Divyaang_Ineligible();
}
template<> inline bool BookingCategory::Tatkal::CheckEligibility(const Passenger &passenger) const{
    return true;
}
template<> inline bool BookingCategory::PremiumTatkal::CheckEligibility(const Passenger &passenger) const{
    return true;
}

// make reservation functions for different sub-types inlined
template<> inline Booking *BookingCategory::General::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) const{
    return new Booking::GeneralBooking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass, GetName());
}
template<> inline Booking *BookingCategory::Ladies::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) const{
    return new Booking::LadiesBooking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass, GetName());
}
template<> inline Booking *BookingCategory::SeniorCitizen::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) const{
    return new Booking::SeniorCitizenBooking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass, GetName());
}
template<> inline Booking *BookingCategory::Divyaang::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) const{
    return new Booking::DivyaangBooking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass, GetName());
}
template<> inline Booking *BookingCategory::Tatkal::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) const{
    tuple<uint32_t, uint32_t, uint32_t> diff = dateOfBooking - dateOfReservation;
    uint32_t date_diff = get<0>(diff), month_diff = get<1>(diff), year_diff = get<2>(diff);

    if(!(date_diff==1 && month_diff==0 && year_diff==0))
        throw Invalid_Tatkal_Date();
    
    return new Booking::TatkalBooking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass, GetName());
}
template<> inline Booking *BookingCategory::PremiumTatkal::MakeReservation(const Station &fromStation, const Station &toStation, const Date &dateOfBooking, const Date &dateOfReservation, const Passenger &passenger, const BookingClasses &bookingClass) const{
    tuple<uint32_t, uint32_t, uint32_t> diff = dateOfBooking - dateOfReservation;
    uint32_t date_diff = get<0>(diff), month_diff = get<1>(diff), year_diff = get<2>(diff);

    if(!(date_diff==1 && month_diff==0 && year_diff==0))
        throw Invalid_Tatkal_Date();
    
    return new Booking::PremiumTatkalBooking(fromStation, toStation, dateOfBooking, dateOfReservation, passenger, bookingClass, GetName());
}

#endif
