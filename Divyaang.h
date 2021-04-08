// Nisarg Upadhyaya
// 19CS30031

#ifndef _DIVYAANG_H
#define _DIVYAANG_H

#include <iostream>
#include <string>

using namespace std;

#include "BookingClasses.h"

// generic Divyaang type to generate different divyaangs
template<typename T>
class DivyaangTypes;

// abstract base class
class Divyaang{
    private:
        const string &name_;

        // tag-types
        struct BlindType {};
        struct OrthopaedicallyHandicapedType {};
        struct CancerPatientType {};
        struct TBPatientType {};
        struct NoneType {}; // none type divyaang to represent no disability

        // blocked copy constructor and copy assignment operator
        Divyaang(const Divyaang &);
        Divyaang &operator=(const Divyaang &);
    
    protected:
        // static const representing 0 concession factor for NoneType concession
        static const double NoneConcessionFactor;

        Divyaang(const string &);
        virtual ~Divyaang();

    public:
        string GetName() const;
        // virtual function for getting a specific divyaang concession factor based on sub-type and the relevant booking class passed
        virtual double GetConcessionFactor(const BookingClasses &) const = 0;

        // enumerated types
        typedef DivyaangTypes<BlindType> Blind;
        typedef DivyaangTypes<OrthopaedicallyHandicapedType> OrthopaedicallyHandicaped;
        typedef DivyaangTypes<CancerPatientType> CancerPatient;
        typedef DivyaangTypes<TBPatientType> TBPatient;
        typedef DivyaangTypes<NoneType> None;

        // output streaming operator
        friend ostream &operator<<(ostream &, const Divyaang &);
};

template<typename T>
class DivyaangTypes : public Divyaang{
    private:
        static const string sName;

        // private constructor and destructor
        DivyaangTypes();
        ~DivyaangTypes();
    
    public:
        // singleton object
        static const DivyaangTypes<T> &Type();

        double GetConcessionFactor(const BookingClasses &) const;

        // unit testing function
        static void UnitTest();        
};

// divyaang types implementations
template<typename T> DivyaangTypes<T>::DivyaangTypes(): Divyaang(sName) {}
template<typename T> DivyaangTypes<T>::~DivyaangTypes() {}
template<typename T> inline const DivyaangTypes<T> &DivyaangTypes<T>::Type(){
    static const DivyaangTypes<T> sDivyaang;
    return sDivyaang;
}

// inline functions for getting name and concession factors
inline string Divyaang::GetName() const{
    return name_;
}
template<> inline double Divyaang::Blind::GetConcessionFactor(const BookingClasses &bookingClass) const{
    return bookingClass.GetBlindConcessionFactor();
}
template<> inline double Divyaang::OrthopaedicallyHandicaped::GetConcessionFactor(const BookingClasses &bookingClass) const{
    return bookingClass.GetOrthopaedicallyHandicapedConcessionFactor();
}
template<> inline double Divyaang::CancerPatient::GetConcessionFactor(const BookingClasses &bookingClass) const{
    return bookingClass.GetCancerConcessionFactor();
}
template<> inline double Divyaang::TBPatient::GetConcessionFactor(const BookingClasses &bookingClass) const{
    return bookingClass.GetTBConcessionFactor();
}
template<> inline double Divyaang::None::GetConcessionFactor(const BookingClasses &bookingClass) const{
    return NoneConcessionFactor;
}

#endif
