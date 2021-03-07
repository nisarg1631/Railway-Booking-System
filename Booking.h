#ifndef _BOOKING_H
#define _BOOKING_H

#include <iostream>
#include <vector>

using namespace std;

#include "Station.h"
#include "BookingClasses.h"
#include "Date.h"

class Person;

class Booking{

    private:
        static const double sBaseFarePerKM, sACSurcharge, sLuxuryTaxPercent;
        static uint32_t sBookingPNRSerial;

        const Station fromStation_, toStation_;
        const Date date_;
        const BookingClasses &bookingClass_;
        
        uint32_t fare_;
        const uint32_t pnr_;
        bool bookingStatus_;
        string bookingMessage_;

        Booking(const Booking &);
        Booking &operator=(const Booking &);
    
    protected:
        virtual uint32_t ComputeFare() const;
    
    public:
        static vector<Booking *> sBookings;

        Booking(const Station &, const Station &, const Date &, const BookingClasses &, const Person * = NULL);
        ~Booking();

        friend ostream &operator<<(ostream &, const Booking &);

        static void UnitTestBooking();
};

#endif