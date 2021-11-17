// Nisarg Upadhyaya
// 19CS30031

#ifndef _DATE_H
#define _DATE_H

#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

class Date{
    private:
        static const vector<uint32_t> sMonthLength; // static container to store length of each month in a non-leap year
        static const vector<string> sMonthNames; // static container to store the names of the months
        static const uint32_t sMinYear, sMaxYear; // static constants to store the range of allowable years

        uint32_t date_, month_, year_;

        static uint32_t DaysInMonth(uint32_t, uint32_t); // static function to get days in a month in any year
        static bool IsLeapYear(uint32_t); // static function to check for leap year

        // constructor made private to ensure it is not called directly with erroneous inputs
        Date(uint32_t, uint32_t, uint32_t);

        // blocked copy assignment operator
        Date &operator=(const Date &);

    public:
        static const Date Today; // static constant representing todays date
        Date(const Date &);
        ~Date();

        // returns the date in a string format dd/mmm/yy
        string ToString() const;

        // creates a new date object if valid date is provided in "dd/mm/yyyy" format, otherwise raises an exception
        static Date CreateDate(const string &s);

        // returns a tuple (days, months, year) representing the number of days, months and years falling between the two dates, also it is commutative and the relative order of dates don't matter
        friend tuple<uint32_t, uint32_t, uint32_t> operator-(const Date &, const Date &);
        // compare two dates
        friend bool operator<(const Date &, const Date &);
        friend bool operator>(const Date &, const Date &);
        // output streaming operator
        friend ostream &operator<<(ostream &, const Date &);

        static void UnitTestDate();
};

inline string Date::ToString() const{
    return to_string(date_)+"/"+sMonthNames[month_-1]+"/"+to_string(year_);
}

inline uint32_t Date::DaysInMonth(uint32_t month, uint32_t year){
    return month == 2U ? sMonthLength[month] + static_cast<uint32_t>(IsLeapYear(year)) : sMonthLength[month];
}
inline bool Date::IsLeapYear(uint32_t year){
    return (((year%4 == 0U) && (year%100U != 0U)) || (year%400U == 0U));
}

#endif
