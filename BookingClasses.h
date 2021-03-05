#ifndef _BOOKINGCLASSES_H
#define _BOOKINGCLASSES_H

#include <iostream>
#include <string>

using namespace std;

class BookingClasses{
    
    private:
        const string &name_;
        const bool &isAC_, &isLuxury_;
        const double &loadFactor_;

        BookingClasses(const BookingClasses &);
        BookingClasses &operator=(const BookingClasses &);

    protected:
        BookingClasses(const string &, const bool &, const bool &, const double &);
        virtual ~BookingClasses();

    public:
        inline string GetName() const{
            return name_;
        }
        inline bool IsAC() const{
            return isAC_;
        }
        inline bool IsLuxury() const{
            return isLuxury_;
        }
        inline double GetLoadFactor() const{
            return loadFactor_;
        }
        virtual bool IsSitting() const = 0;
        virtual uint32_t GetNumberOfTiers() const = 0;

        friend ostream &operator<<(ostream &, const BookingClasses &);
};

class SittingClasses : public BookingClasses{

    protected:
        SittingClasses(const string &, const bool &, const bool &, const double &);
        ~SittingClasses();

    public:
        inline bool IsSitting() const{
            return true;
        }
        inline uint32_t GetNumberOfTiers() const{
            return 0U;
        }
};

class SleepingClasses : public BookingClasses{
    
    protected:
        SleepingClasses(const string &, const bool &, const bool &, const double &);
        ~SleepingClasses();

    public:
        inline bool IsSitting() const{
            return false;
        }
};

class Sleeping2Tier : public SleepingClasses{
    
    protected:
        Sleeping2Tier(const string &, const bool &, const bool &, const double &);
        ~Sleeping2Tier();

    public:
        inline uint32_t GetNumberOfTiers() const{
            return 2U;
        }
};

class Sleeping3Tier : public SleepingClasses{

    protected:
        Sleeping3Tier(const string &, const bool &, const bool &, const double &);
        ~Sleeping3Tier();

    public:
        inline uint32_t GetNumberOfTiers() const{
            return 3U;
        }
};

class ACFirstClass : public Sleeping2Tier{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        ACFirstClass();
        ~ACFirstClass();
    
    public:
        static const ACFirstClass &Type();
};

class AC2Tier : public Sleeping2Tier{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        AC2Tier();
        ~AC2Tier();
    
    public:
        static const AC2Tier &Type();
};

class FirstClass : public Sleeping2Tier{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        FirstClass();
        ~FirstClass();
    
    public:
        static const FirstClass &Type();
};

class AC3Tier : public Sleeping3Tier{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        AC3Tier();
        ~AC3Tier();
    
    public:
        static const AC3Tier &Type();
};

class ACChairCar : public SittingClasses{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        ACChairCar();
        ~ACChairCar();
    
    public:
        static const ACChairCar &Type();
};

class Sleeper : public Sleeping3Tier{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        Sleeper();
        ~Sleeper();
    
    public:
        static const Sleeper &Type();
};

class SecondSitting : public SittingClasses{

    private:
        static const string sName;
        static const bool sIsAC, sIsLuxury;
        static const double sLoadFactor;

        SecondSitting();
        ~SecondSitting();
    
    public:
        static const SecondSitting &Type();
};

#endif