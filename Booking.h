// Nisarg Upadhyaya
// 19CS30031

#ifndef _BOOKING_H
#define _BOOKING_H

#include <iostream>
#include <vector>

using namespace std;

#include "Station.h"
#include "BookingClasses.h"
#include "Passenger.h"
#include "Date.h"
#include "Categories.h"

class BookingCategory; // forward declaration

// generic Booking type to generate different bookings
template<typename T>
class BookingTypes;

class Booking{
    private:
        // blocked copy constructor and copy assignment operator
        Booking(const Booking &);
        Booking &operator=(const Booking &);
    
    protected:
        static vector<Booking *> sBookings; // static container to store the list of all bookings done so far
        static const double sBaseFarePerKM; // static const required for fare computation
        static uint32_t sBookingPNRSerial;  // static to assign unique PNRs to bookings in a sequential order

        const Station &fromStation_, &toStation_;
        const Date dateOfBooking_, dateOfReservation_;
        const BookingClasses &bookingClass_; // const reference to the singleton booking class
        const Passenger &passenger_;
        uint32_t fare_;
        uint32_t pnr_;
        bool bookingStatus_;
        string bookingMessage_;

        virtual uint32_t ComputeFare() const = 0;
        Booking(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &);
        virtual ~Booking();
    
    public:
        // static function to make any reservation, it calls the MakeReservation of the BookingCategory passed which creates an appropriate Booking sub-type (virtual constructor idiom)
        static void MakeReservation(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &, const BookingCategory &);
        // static function to print all bookings made so far
        static void PrintBookings();

        // sub-types
        typedef BookingTypes<Categories::GeneralType> GeneralBooking;
        typedef BookingTypes<Categories::LadiesType> LadiesBooking;
        typedef BookingTypes<Categories::SeniorCitizenType> SeniorCitizenBooking;
        typedef BookingTypes<Categories::DivyaangType> DivyaangBooking;
        typedef BookingTypes<Categories::TatkalType> TatkalBooking;
        typedef BookingTypes<Categories::PremiumTatkalType> PremiumTatkalBooking;

        friend ostream &operator<<(ostream &, const Booking &);
        static void UnitTestBooking();
};

template<typename T>
class BookingTypes : public Booking{
    private:
        uint32_t ComputeFare() const;
    
    public:
        BookingTypes(const Station &, const Station &, const Date &, const Date &, const Passenger &, const BookingClasses &);
        ~BookingTypes();
};

#endif
