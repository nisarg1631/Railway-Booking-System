// Nisarg Upadhyaya
// 19CS30031

#ifndef _CONCESSION_H
#define _CONCESSION_H

#include <iostream>
#include <string>

using namespace std;

#include "Passenger.h"

class Concession{
    private:
        const string &name_;

        // blocked copy constructor and copy assignment operator
        Concession(const Concession &);
        Concession &operator=(const Concession &);

    protected:
        Concession(const string &);
        ~Concession();
};

// singleton concession classes

class GeneralConcession : public Concession{
    private:
        static const string sName;
        static const double sConcessionFactor;

        // private constructor and destructor
        GeneralConcession();
        ~GeneralConcession();

    public:
        // singleton type
        static const GeneralConcession &Type();
        double GetConcessionFactor() const;

        static void UnitTest();
};

class LadiesConcession : public Concession{
    private:
        static const string sName;
        static const double sConcessionFactor;

        // private constructor and destructor
        LadiesConcession();
        ~LadiesConcession();

    public:
        // singleton type
        static const LadiesConcession &Type();
        double GetConcessionFactor(const Passenger &) const;

        static void UnitTest();
};

class SeniorCitizenConcession : public Concession{
    private:
        static const string sName;

        // private constructor and destructor
        SeniorCitizenConcession();
        ~SeniorCitizenConcession();

    public:
        // singleton type
        static const SeniorCitizenConcession &Type();
        double GetConcessionFactor(const Passenger &) const;

        static void UnitTest();
};

class DivyaangConcession : public Concession{
    private:
        static const string sName;

        // private constructor and destructor
        DivyaangConcession();
        ~DivyaangConcession();

    public:
        // singleton type
        static const DivyaangConcession &Type();
        double GetConcessionFactor(const Passenger &, const BookingClasses &) const;

        static void UnitTest();
};

// general concession
inline const GeneralConcession &GeneralConcession::Type(){
    static const GeneralConcession sGeneralConcession;
    return sGeneralConcession;
}
inline double GeneralConcession::GetConcessionFactor() const{
    return sConcessionFactor;
}

// ladies concession
inline const LadiesConcession &LadiesConcession::Type(){
    static const LadiesConcession sLadiesConcession;
    return sLadiesConcession;
}
inline double LadiesConcession::GetConcessionFactor(const Passenger &passenger) const{
    return sConcessionFactor;
}

// senior citizen concession
inline const SeniorCitizenConcession &SeniorCitizenConcession::Type(){
    static const SeniorCitizenConcession sSeniorCitizenConcession;
    return sSeniorCitizenConcession;
}
inline double SeniorCitizenConcession::GetConcessionFactor(const Passenger &passenger) const{
    return passenger.GetGender().GetSeniorCitizenConcessionFactor();
}

// divyaang concession
inline const DivyaangConcession &DivyaangConcession::Type(){
    static const DivyaangConcession sDivyaangConcession;
    return sDivyaangConcession;
}
inline double DivyaangConcession::GetConcessionFactor(const Passenger &passenger, const BookingClasses &bookingClass) const{
    return passenger.GetDisabilityType().GetConcessionFactor(bookingClass);
}

#endif
