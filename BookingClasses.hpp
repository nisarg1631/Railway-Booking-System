#ifndef BOOKINGCLASSES_HPP
#define BOOKINGCLASSES_HPP

#include <iostream>
#include <string>
using namespace std;

class BookingClasses{

    public:
        BookingClasses();
        virtual ~BookingClasses();

        virtual double GetLoadFactor() const = 0;
        virtual string GetName() const = 0;
        virtual bool IsSitting() const = 0;
        virtual bool IsAC() const = 0;
        virtual uint32_t GetNumberOfTiers() const = 0;
        virtual bool IsLuxury() const = 0;
};

class SittingClasses : public BookingClasses{

    public:
        SittingClasses();
        ~SittingClasses();

        inline bool IsSitting() const{
            return true;
        }
        inline uint32_t GetNumberOfTiers() const{
            return 0;
        }
};

class SleepingClasses : public BookingClasses{

    public:
        SleepingClasses();
        ~SleepingClasses();

        inline bool isSitting() const{
            return false;
        }
};

class Sleeping2Tier : public SleepingClasses{

    public:
        Sleeping2Tier();
        ~Sleeping2Tier();

        inline uint32_t GetNumberOfTiers() const{
            return 2;
        }
};

class Sleeping3Tier : public SleepingClasses{

    public:
        Sleeping3Tier();
        ~Sleeping3Tier();

        inline uint32_t GetNumberOfTiers() const{
            return 3;
        }
};

#endif