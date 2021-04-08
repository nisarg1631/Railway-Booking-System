// Nisarg Upadhyaya
// 19CS30031

#ifndef _PASSENGER_H
#define _PASSENGER_H

#include <iostream>
#include <string>

#include "Name.h"
#include "Date.h"
#include "Gender.h"
#include "Divyaang.h"

using namespace std;

class Passenger{

    private:
        const Name name_;
        const string aadharNum_, mobileNum_;
        const Date dateOfBirth_;
        const Gender &gender_;
        const Divyaang &disabilityType_;
        const string disabilityID_;

        // constructor and destructor made private to ensure they are not called directly with erroneous inputs
        Passenger(const Name &, const string &, const string &, const Date &, const Gender &, const Divyaang &, const string &);
        ~Passenger();

        // blocked copy assignment operator and copy constructor
        Passenger &operator=(const Passenger &);

    public:
        Passenger(const Passenger &);

        // creates a new passenger object if valid data is provided, otherwise raises an exception
        static Passenger CreatePassenger(const Name &, const string &, const string &, const Date &, const Gender &, const Divyaang &, const string &);

        const Name &GetName() const;
        string GetAadharNum() const;
        string GetMobileNum() const;
        const Date &GetDateOfBirth() const;
        const Gender &GetGender() const;
        const Divyaang &GetDisabilityType() const;
        string GetDisabilityID() const;
        
        friend ostream &operator<<(ostream &, const Passenger &);
};

inline const Name &Passenger::GetName() const{
    return name_;
}
inline string Passenger::GetAadharNum() const{
    return aadharNum_;
}
inline string Passenger::GetMobileNum() const{
    return mobileNum_;
}
inline const Date &Passenger::GetDateOfBirth() const{
    return dateOfBirth_;
}
inline const Gender &Passenger::GetGender() const{
    return gender_;
}
inline const Divyaang &Passenger::GetDisabilityType() const{
    return disabilityType_;
}
inline string Passenger::GetDisabilityID() const{
    return disabilityID_;
}

#endif
