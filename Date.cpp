#include "Date.hpp"

const vector<string> Date::sMonthNames = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
const vector<string> Date::sDayNames = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

Date::Date(uint32_t date, uint32_t month, uint32_t year) : date_(date), month_(month), year_(year) {}
Date::~Date() {}

ostream &operator<<(ostream &os, const Date &d){
    os<<d.date_<<"/"<<Date::sMonthNames[d.month_-1]<<"/"<<d.year_;
    return os;
}