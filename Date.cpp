// Nisarg Upadhyaya
// 19CS30031

#include <sstream>
#include <regex>
#include "Date.h"

// initialise static constants
const vector<uint32_t> Date::sMonthLength = {0U, 31U, 28U, 31U, 30U, 31U, 30U, 31U, 31U, 30U, 31U, 30U, 31U};
const vector<string> Date::sMonthNames = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
const uint32_t Date::sMinYear = 1900;
const uint32_t Date::sMaxYear = 2099;

Date::Date(uint32_t date, uint32_t month, uint32_t year) : date_(date), month_(month), year_(year) {
    #ifdef _DEBUG
    cout<<"Date "<<*this<<" created."<<endl;
    #endif
}
Date::Date(const Date &obj) : date_(obj.date_), month_(obj.month_), year_(obj.year_) {}
Date::~Date() {
    #ifdef _DEBUG
    cout<<"Date "<<*this<<" destructed."<<endl;
    #endif
}

// Date& Date::operator=(const Date& date){
//     this->date_ = date.date_;
//     this->month_ = date.month_;
//     this->year_ = date.year_;
//     return *this;
// }

Date Date::CreateDate(const string &s){
    if(regex_match(s, regex("[0-9]{2}[/][0-9]{2}[/][0-9]{4}"))){
        istringstream ss(s);
        uint32_t date, month, year;
        char delimitter;
        ss >> date >> delimitter >> month >> delimitter >> year;

        if(year<sMinYear || year>sMaxYear)
            throw string("Year out of bound."); // year out of bounds
        
        if(month<1U || month>12U)
            throw string("Month out of bound."); // month out of bounds
        
        if(date<1U || date>31U)
            throw string("Date out of bound."); // date out of bounds

        if(date > DaysInMonth(month, year))
            throw string("Invalid date."); // invalid date

        return Date(date, month, year);
    }
    throw string("Invalid input format."); // invalid input format
}

tuple<uint32_t, uint32_t, uint32_t> operator-(const Date &d1, const Date &d2){
    Date fut(d2 < d1 ? d1 : d2);
    Date pre(d2 < d1 ? d2 : d1);

    uint32_t day_diff;
    if(fut.date_>=pre.date_)
        day_diff = fut.date_ - pre.date_;
    else{
        fut.month_--;
        if(!fut.month_){ // if month becomes 0 then shift 1 year back
            fut.month_ = 12;
            fut.year_--;
        }
        day_diff = fut.date_ + Date::DaysInMonth(fut.month_, fut.year_) - pre.date_;
    }

    uint32_t month_diff;
    if(fut.month_>=pre.month_)
        month_diff = fut.month_ - pre.month_;
    else{
        month_diff = fut.month_ + 12 - pre.month_;
        fut.year_--;
    }

    uint32_t year_diff = fut.year_ - pre.year_;

    return tuple<uint32_t, uint32_t, uint32_t>(day_diff, month_diff, year_diff);
}

bool operator<(const Date &d1, const Date &d2){
    if(d1.year_ != d2.year_)
        return d1.year_ < d2.year_;
    if(d1.month_ != d2.month_)
        return d1.month_ < d2.month_;
    return d1.date_ < d2.date_;
}

bool operator>(const Date &d1, const Date &d2){
    return d2<d1;
}

ostream &operator<<(ostream &os, const Date &d){
    os<<d.ToString();
    return os;
}
