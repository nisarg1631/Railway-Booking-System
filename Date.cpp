// Nisarg Upadhyaya
// 19CS30031

#include <sstream>
#include <regex>
#include "Date.h"

// initialise static constants
const vector<string> Date::sMonthNames = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
const uint32_t Date::sMinYear = 1900;
const uint32_t Date::sMaxYear = 2099;

Date::Date(uint32_t date, uint32_t month, uint32_t year) : date_(date), month_(month), year_(year) {}
Date::Date(const Date &obj) : date_(obj.date_), month_(obj.month_), year_(obj.year_) {}
Date::~Date() {}

Date Date::CreateDate(const string &s){
    if(regex_match(s, regex("[0-9]{2}[/][0-9]{2}[/][0-9]{4}"))){
        istringstream ss(s);
        uint32_t date, month, year;
        char delimitter;
        ss >> date >> delimitter >> month >> delimitter >> year;

        if(year<sMinYear || year>sMaxYear)
            throw exception(); // year out of bounds
        
        if(month<1U || month>12U)
            throw exception(); // month out of bounds
        
        if(date<1U || date>31U)
            throw exception(); // date out of bounds
        
        bool isLeap = (((year%4 == 0U) && (year%100U != 0U)) || (year%400U == 0U));

        if(month==2U){
            if((isLeap && date>29U) || (!isLeap && date>28U))
                throw exception(); // invalid date
            else
                return Date(date, month, year);
        }

        if(month==4U || month==6U || month==9U || month==11U){
            if(date>30U)
                throw exception(); // invalid date
            else
                return Date(date, month, year);
        }

        return Date(date, month, year);
    }
    throw exception(); // invalid input format
}

int operator-(const Date &d1, const Date &d2){
    return 0;
}

ostream &operator<<(ostream &os, const Date &d){
    os<<d.ToString();
    return os;
}