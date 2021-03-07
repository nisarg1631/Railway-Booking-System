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
        // static containers to store the names of the months and days
        static const vector<string> sMonthNames;
        static const vector<string> sDayNames;
        
        uint32_t date_, month_, year_;

        Date &operator=(const Date &);

    public:
        Date(uint32_t, uint32_t, uint32_t);
        Date(const Date &);
        ~Date();

        // returns the date in a string format dd/mmm/yy
        inline string ToString() const{
            return to_string(date_)+"/"+sMonthNames[month_-1]+"/"+to_string(year_);
        }

        friend ostream &operator<<(ostream &, const Date &);

        static void UnitTestDate();
};

#endif