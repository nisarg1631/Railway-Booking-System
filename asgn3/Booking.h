// Nisarg Upadhyaya
// 19CS30031

#ifndef _BOOKING_H
#define _BOOKING_H

#include <iostream>
#include <vector>

using namespace std;

#include "Station.h"
#include "BookingClasses.h"
#include "Date.h"

class Person; // forward decalration, class is not implemented

class Booking{

    private:
        static const double sBaseFarePerKM, sACSurcharge, sLuxuryTaxPercent; // static consts required for fare computation
        static uint32_t sBookingPNRSerial;  // static to assign unique PNRs to bookings in a sequential order

        const Station fromStation_, toStation_;
        const Date date_;
        const BookingClasses &bookingClass_; // const reference to the singleton booking class
        
        uint32_t fare_;
        const uint32_t pnr_;
        bool bookingStatus_;
        string bookingMessage_;

        Booking(const Booking &);
        Booking &operator=(const Booking &);
    
    protected:
        virtual uint32_t ComputeFare() const;
    
    public:
        static vector<Booking *> sBookings; // static container to store the list of all bookings done so far

        Booking(const Station &, const Station &, const Date &, const BookingClasses &, const Person * = NULL);
        ~Booking();

        friend ostream &operator<<(ostream &, const Booking &);

        static void UnitTestBooking();
};

#endif