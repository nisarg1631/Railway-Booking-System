#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date{

    private:
        static const vector<string> sMonthNames;
        static const vector<string> sDayNames;
        uint32_t date_, month_, year_;

    public:
        Date(uint32_t, uint32_t, uint32_t);
        ~Date();
        friend ostream &operator<<(ostream &, const Date &);
};

#endif