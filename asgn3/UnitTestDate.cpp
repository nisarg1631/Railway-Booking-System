// Nisarg Upadhyaya
// 19CS30031

#include "Date.h"

void Date::UnitTestDate(){
    // check all month names are loaded properly in sMonthNames
    if(sMonthNames[0] != "Jan")
        cout<<"Incorrect month name for January in Date."<<endl;
    if(sMonthNames[1] != "Feb")
        cout<<"Incorrect month name for February in Date."<<endl;
    if(sMonthNames[2] != "Mar")
        cout<<"Incorrect month name for March in Date."<<endl;
    if(sMonthNames[3] != "Apr")
        cout<<"Incorrect month name for April in Date."<<endl;
    if(sMonthNames[4] != "May")
        cout<<"Incorrect month name for May in Date."<<endl;
    if(sMonthNames[5] != "Jun")
        cout<<"Incorrect month name for June in Date."<<endl;
    if(sMonthNames[6] != "Jul")
        cout<<"Incorrect month name for July in Date."<<endl;
    if(sMonthNames[7] != "Aug")
        cout<<"Incorrect month name for August in Date."<<endl;
    if(sMonthNames[8] != "Sep")
        cout<<"Incorrect month name for September in Date."<<endl;
    if(sMonthNames[9] != "Oct")
        cout<<"Incorrect month name for October in Date."<<endl;
    if(sMonthNames[10] != "Nov")
        cout<<"Incorrect month name for November in Date."<<endl;
    if(sMonthNames[11] != "Dec")
        cout<<"Incorrect month name for December in Date."<<endl;

    Date myBirthday(16, 3, 2001);

    if(myBirthday.date_ != 16U)
        cout<<"Incorrect date_ in Date."<<endl;
    if(myBirthday.month_ != 3U)
        cout<<"Incorrect month_ in Date."<<endl;
    if(myBirthday.year_ != 2001U)
        cout<<"Incorrect year_ in Date."<<endl;

    // check ToString method
    if(myBirthday.ToString() != "16/Mar/2001")
        cout<<"Incorrect conversion to string in Date."<<endl;
    
    // check output streaming operator
    cout<<myBirthday<<endl;
}

int main(){
    Date::UnitTestDate();
    return 0;
}