// Nisarg Upadhyaya
// 19CS30031

#ifndef _BOOKINGCLASSES_H
#define _BOOKINGCLASSES_H

#include <iostream>
#include <string>

using namespace std;

// generic BookingClasses type to generate different booking classes
template<typename T>
class BookingClassesTypes;

// abstract base class
class BookingClasses{
    private:
        const string &name_;

        // tag-types
        struct ACFirstClassType {};    
        struct ExecutiveChairCarType {};    
        struct AC2TierType {};         
        struct FirstClassType {};      
        struct AC3TierType {};         
        struct ACChairCarType {};      
        struct SleeperType {};         
        struct SecondSittingType {};

        // blocked copy constructor and copy assignment operator
        BookingClasses(const BookingClasses &);
        BookingClasses &operator=(const BookingClasses &);

    protected:
        // protected constructor and destructor visible to sub-types only
        BookingClasses(const string &);
        virtual ~BookingClasses();
    
    public:
        string GetName() const;
        // virtual functions for getting information about a specific class
        virtual bool IsAC() const = 0;
        virtual bool IsLuxury() const = 0;
        virtual bool IsSitting() const = 0;
        virtual uint32_t GetNumberOfTiers() const = 0;
        virtual double GetLoadFactor() const = 0;
        virtual double GetReservationCharge() const = 0;
        virtual double GetTatkalLoadFactor() const = 0;
        virtual double GetMinimumTatkalCharge() const = 0;
        virtual double GetMaximumTatkalCharge() const = 0;
        virtual uint32_t GetMinimumTatkalDistance() const = 0;

        // virtual functions for getting divyaang concession factors of a specific class
        virtual double GetBlindConcessionFactor() const = 0;
        virtual double GetOrthopaedicallyHandicapedConcessionFactor() const = 0;
        virtual double GetCancerConcessionFactor() const = 0;
        virtual double GetTBConcessionFactor() const = 0;

        // enumerated types
        typedef BookingClassesTypes<ACFirstClassType> ACFirstClass;        
        typedef BookingClassesTypes<ExecutiveChairCarType> ExecutiveChairCar;        
        typedef BookingClassesTypes<AC2TierType> AC2Tier;                  
        typedef BookingClassesTypes<FirstClassType> FirstClass;            
        typedef BookingClassesTypes<AC3TierType> AC3Tier;                  
        typedef BookingClassesTypes<ACChairCarType> ACChairCar;            
        typedef BookingClassesTypes<SleeperType> Sleeper;                  
        typedef BookingClassesTypes<SecondSittingType> SecondSitting;

        // friend output function
        friend ostream &operator<<(ostream &, const BookingClasses &);
};

// derived classes (singletons)
template<typename T>
class BookingClassesTypes : public BookingClasses{
    private:
        // static constants for class attributes
        static const string sName;
        static const bool sAC;
        static const bool sLuxury;
        static const bool sSitting;
        static const uint32_t sNumberOfTiers;
        static const double sLoadFactor;
        static const double sReservationCharge;
        static const double sTatkalLoadFactor;
        static const double sMinimumTatkalCharge;
        static const double sMaximumTatkalCharge;
        static const uint32_t sMinimumTatkalDistance;

        // static constants for divyaang concession factors which are closely related to classes, hence were moved here instead of keeping them in the sub-types of Divyaang classes, made it easy to access the relevant concession factor through dynamic dispatch instead of the initially thought approach involving overloading
        static const double sBlindConcessionFactor;
        static const double sOrthopaedicallyHandicapedConcessionFactor;
        static const double sCancerConcessionFactor;
        static const double sTBConcessionFactor;

        // private constructor and destructor
        BookingClassesTypes();
        ~BookingClassesTypes();

    public:
        // singleton object
        static const BookingClassesTypes<T> &Type();

        bool IsAC() const;
        bool IsLuxury() const;
        bool IsSitting() const;
        uint32_t GetNumberOfTiers() const;
        double GetLoadFactor() const;
        double GetReservationCharge() const;
        double GetTatkalLoadFactor() const;
        double GetMinimumTatkalCharge() const;
        double GetMaximumTatkalCharge() const;
        uint32_t GetMinimumTatkalDistance() const;

        double GetBlindConcessionFactor() const;
        double GetOrthopaedicallyHandicapedConcessionFactor() const;
        double GetCancerConcessionFactor() const;
        double GetTBConcessionFactor() const;
};

// booking classes types implementations
template<typename T> BookingClassesTypes<T>::BookingClassesTypes(): BookingClasses(sName) {}
template<typename T> BookingClassesTypes<T>::~BookingClassesTypes() {}
template<typename T> inline const BookingClassesTypes<T> &BookingClassesTypes<T>::Type(){
    static const BookingClassesTypes<T> sBookingClass;
    return sBookingClass;
}

// inline functions for getting information about the class
inline string BookingClasses::GetName() const{
    return name_;
}
template<typename T> inline bool BookingClassesTypes<T>::IsAC() const{
    return sAC;
}
template<typename T> inline bool BookingClassesTypes<T>::IsLuxury() const{
    return sLuxury;
}
template<typename T> inline bool BookingClassesTypes<T>::IsSitting() const{
    return sSitting;
}
template<typename T> inline uint32_t BookingClassesTypes<T>::GetNumberOfTiers() const{
    return sNumberOfTiers;
}
template<typename T> inline double BookingClassesTypes<T>::GetLoadFactor() const{
    return sLoadFactor;
}
template<typename T> inline double BookingClassesTypes<T>::GetReservationCharge() const{
    return sReservationCharge;
}
template<typename T> inline double BookingClassesTypes<T>::GetTatkalLoadFactor() const{
    return sTatkalLoadFactor;
}
template<typename T> inline double BookingClassesTypes<T>::GetMinimumTatkalCharge() const{
    return sMinimumTatkalCharge;
}
template<typename T> inline double BookingClassesTypes<T>::GetMaximumTatkalCharge() const{
    return sMaximumTatkalCharge;
}
template<typename T> inline uint32_t BookingClassesTypes<T>::GetMinimumTatkalDistance() const{
    return sMinimumTatkalDistance;
}
template<typename T> inline double BookingClassesTypes<T>::GetBlindConcessionFactor() const{
    return sBlindConcessionFactor;
}
template<typename T> inline double BookingClassesTypes<T>::GetOrthopaedicallyHandicapedConcessionFactor() const{
    return sOrthopaedicallyHandicapedConcessionFactor;
}
template<typename T> inline double BookingClassesTypes<T>::GetCancerConcessionFactor() const{
    return sCancerConcessionFactor;
}
template<typename T> inline double BookingClassesTypes<T>::GetTBConcessionFactor() const{
    return sTBConcessionFactor;
}

#endif
