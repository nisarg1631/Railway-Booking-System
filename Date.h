// Nisarg Upadhyaya
// 19CS30031

#ifndef _DATE_H
#define _DATE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date{
    private:
        static const vector<string> sMonthNames; // static container to store the names of the months
        static const uint32_t sMinYear, sMaxYear; // static constants to store the range of allowable years

        uint32_t date_, month_, year_;

        // constructor and destructor made private to ensure they are not called directly with erroneous inputs
        Date(uint32_t, uint32_t, uint32_t);
        ~Date();

        // blocked copy assignment operator
        Date &operator=(const Date &);

    public:
        Date(const Date &);

        // returns the date in a string format dd/mmm/yy
        inline string ToString() const{
            return to_string(date_)+"/"+sMonthNames[month_-1]+"/"+to_string(year_);
        }

        // creates a new date object if valid date is provided in "dd/mm/yyyy" format, otherwise raises an exception
        static Date CreateDate(const string &s);

        // returns the span between two dates, is positive if the date as the first parameter comes after the second date, otherwise negative, returns 0 if both dates are same
        friend int operator-(const Date &, const Date &);
        friend ostream &operator<<(ostream &, const Date &);

        static void UnitTestDate();
};

#endif