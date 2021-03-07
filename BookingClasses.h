#ifndef _BOOKINGCLASSES_H
#define _BOOKINGCLASSES_H

#include <iostream>
#include <string>

using namespace std;

class BookingClasses{
    
    private:
        const string name_;
        const bool isAC_;

        BookingClasses(const BookingClasses &);
        BookingClasses &operator=(const BookingClasses &);

    protected:
        BookingClasses(const string &, const bool &);
        virtual ~BookingClasses();

    public:
        inline string GetName() const{
            return name_;
        }
        inline bool IsAC() const{
            return isAC_;
        }
        virtual bool IsLuxury() const = 0;
        virtual double GetLoadFactor() const = 0;
        virtual bool IsSitting() const = 0;
        virtual uint32_t GetNumberOfTiers() const = 0;

        friend ostream &operator<<(ostream &, const BookingClasses &);

        static void UnitTest();
};

class SittingClasses : public BookingClasses{

    protected:
        SittingClasses(const string &, const bool &);
        ~SittingClasses();

    public:
        inline bool IsSitting() const{
            return true;
        }
        inline uint32_t GetNumberOfTiers() const{
            return 0U;
        }

        static void UnitTest();
};

class SleepingClasses : public BookingClasses{
    
    protected:
        SleepingClasses(const string &, const bool &);
        ~SleepingClasses();

    public:
        inline bool IsSitting() const{
            return false;
        }

        static void UnitTest();
};

class Sleeping2Tier : public SleepingClasses{
    
    protected:
        Sleeping2Tier(const string &, const bool &);
        ~Sleeping2Tier();

    public:
        inline uint32_t GetNumberOfTiers() const{
            return 2U;
        }

        static void UnitTest();
};

class Sleeping3Tier : public SleepingClasses{

    protected:
        Sleeping3Tier(const string &, const bool &);
        ~Sleeping3Tier();

    public:
        inline uint32_t GetNumberOfTiers() const{
            return 3U;
        }

        static void UnitTest();
};

class ACFirstClass : public Sleeping2Tier{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        ACFirstClass();
        ~ACFirstClass();
    
    public:
        static const ACFirstClass &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

class AC2Tier : public Sleeping2Tier{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        AC2Tier();
        ~AC2Tier();
    
    public:
        static const AC2Tier &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

class FirstClass : public Sleeping2Tier{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        FirstClass();
        ~FirstClass();
    
    public:
        static const FirstClass &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

class AC3Tier : public Sleeping3Tier{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        AC3Tier();
        ~AC3Tier();
    
    public:
        static const AC3Tier &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

class ACChairCar : public SittingClasses{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        ACChairCar();
        ~ACChairCar();
    
    public:
        static const ACChairCar &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

class Sleeper : public Sleeping3Tier{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        Sleeper();
        ~Sleeper();
    
    public:
        static const Sleeper &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

class SecondSitting : public SittingClasses{

    private:
        static const bool sIsLuxury;
        static const double sLoadFactor;

        SecondSitting();
        ~SecondSitting();
    
    public:
        static const SecondSitting &Type();
        inline double GetLoadFactor() const{
            return sLoadFactor;
        }
        inline bool IsLuxury() const{
            return sIsLuxury;
        }

        static void UnitTest();
};

#endif