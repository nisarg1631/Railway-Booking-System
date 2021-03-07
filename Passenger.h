// Nisarg Upadhyaya
// 19CS30031

#ifndef _PASSENGER_H
#define _PASSENGER_H

#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

class Passenger{

    private:
        const string name_, aadharNum_, mobileNum_;
        const Date dateOfBirth_;
        const bool isMale_;

        Passenger &operator=(const Passenger &);

    protected:
        Passenger();
        virtual ~Passenger(); // virtual destructor for base class
        
    public:
        Passenger(const Passenger &);

        string GetName() const;
        string GetAadharNum() const;
        string GetMobileNum() const;
        const Date &GetDateOfBirth() const;
        bool IsMale() const;
        virtual string GetCategory() const = 0; // made virtual for Passenger hierarchy
        
        friend ostream &operator<<(ostream &, const Passenger &);
};

#endif