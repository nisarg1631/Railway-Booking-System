// Nisarg Upadhyaya
// 19CS30031

#include "Date.h"
#include "Exceptions.h"

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

    // create date with error in input format
    try{
        CreateDate("12/091/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    // create date with out of bound year (upper and lower)
    try{
        CreateDate("12/09/2100");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    try{
        CreateDate("12/09/1899");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    // create date with out of bound month (upper and lower)
    try{
        CreateDate("12/13/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    try{
        CreateDate("12/00/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    // create date with out of bound date (upper and lower)
    try{
        CreateDate("32/01/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    try{
        CreateDate("00/01/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    // create invalid date (more days in a month than expected)
    try{ // february in non-leap year
        CreateDate("29/02/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    try{ // april with 31 days
        CreateDate("31/04/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    // create valid date
    try{ // february in leap year
        CreateDate("29/02/2020");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }
    try{
        CreateDate("31/05/2001");
    }
    catch(const Bad_Date& e){
        std::cerr << e.what() << '\n';
    }

    // check DaysInMonth
    // leap-year feb
    if(DaysInMonth(2U, 2020U) != 29U)
        cout<<"Error in DaysInMonth. Line: "<<__LINE__<<endl;
    // leap-year non-feb
    if(DaysInMonth(3U, 2020U) != 31U)
        cout<<"Error in DaysInMonth. Line: "<<__LINE__<<endl;
    // non-leap year feb
    if(DaysInMonth(2U, 2021U) != 28U)
        cout<<"Error in DaysInMonth. Line: "<<__LINE__<<endl;
    // non-leap year non-feb
    if(DaysInMonth(4U, 2021U) != 30U)
        cout<<"Error in DaysInMonth. Line: "<<__LINE__<<endl;

    // check LeapYear
    // not multiple of 4
    if(IsLeapYear(2021U))
        cout<<"Error in IsLeapYear. Line: "<<__LINE__<<endl;
    // multiple of 100 but not 400
    if(IsLeapYear(1900U))
        cout<<"Error in IsLeapYear. Line: "<<__LINE__<<endl;
    // multiple of 4 but not 100
    if(!IsLeapYear(2020U))
        cout<<"Error in IsLeapYear. Line: "<<__LINE__<<endl;
    // multiple of 400
    if(!IsLeapYear(2000U))
        cout<<"Error in IsLeapYear. Line: "<<__LINE__<<endl;

    // check comparison operators
    Date d1 = CreateDate("16/03/2021");
    Date d2 = CreateDate("12/05/2022");
    Date d3 = CreateDate("12/04/2021");
    Date d4 = CreateDate("18/03/2021");
    if(d1<d1 || d1>d1)
        cout<<"Error in Comparison. Line: "<<__LINE__<<endl;
    if(d2<d1 || d1>d2)
        cout<<"Error in Comparison. Line: "<<__LINE__<<endl;
    if(d3<d1 || d1>d3)
        cout<<"Error in Comparison. Line: "<<__LINE__<<endl;
    if(d4<d1 || d1>d4)
        cout<<"Error in Comparison. Line: "<<__LINE__<<endl;
    
    // check difference operator
    // same date
    tuple<uint32_t, uint32_t, uint32_t> diff = d1-d1;
    if(get<0>(diff) != 0 || get<1>(diff) != 0 || get<2>(diff) != 0)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
    // commutative nature
    diff = d2-d1;
    if(get<0>(diff) != 26 || get<1>(diff) != 1 || get<2>(diff) != 1)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
    tuple<uint32_t, uint32_t, uint32_t> diff2 = d1-d2;
    if(diff != diff2)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
    // same year
    diff = d3-d1;
    if(get<0>(diff) != 27 || get<1>(diff) != 0 || get<2>(diff) != 0)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
    // same month
    diff = d4-d1;
    if(get<0>(diff) != 2 || get<1>(diff) != 0 || get<2>(diff) != 0)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
    // boundary of two years
    Date d5 = CreateDate("25/12/2020");
    Date d6 = CreateDate("05/01/2021");
    diff = d6-d5;
    if(get<0>(diff) != 11 || get<1>(diff) != 0 || get<2>(diff) != 0)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
    // future month less than present month
    Date d7 = CreateDate("28/02/2021");
    diff = d7-d5;
    if(get<0>(diff) != 3 || get<1>(diff) != 2 || get<2>(diff) != 0)
        cout<<"Error in Difference. Line: "<<__LINE__<<endl;
}

int main(){
    Date::UnitTestDate();
    return 0;
}