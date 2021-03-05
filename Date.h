#ifndef _DATE_H
#define _DATE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date{

    private:
        static const vector<string> sMonthNames;
        static const vector<string> sDayNames;
        uint32_t date_, month_, year_;

        Date &operator=(const Date &);

    public:
        Date(uint32_t, uint32_t, uint32_t);
        Date(const Date &);
        ~Date();
        
        friend ostream &operator<<(ostream &, const Date &);
};

#endif