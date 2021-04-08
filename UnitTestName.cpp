// Nisarg Upadhyaya
// 19CS30031

#include "Name.h"

void Name::UnitTestName(){
    // invalid input, all fields empty
    try{
        CreateName("", "", "");
    }
    catch(const string &e){
        cout<<e<<endl;
    }
    // invalid input, first and last name empty
    try{
        CreateName("", "test", "");
    }
    catch(const string &e){
        cout<<e<<endl;
    }
    // valid input, only first name
    try{
        CreateName("test", "", "");
    }
    catch(const string &e){
        cout<<e<<endl;
    }
    // valid input, only last name
    try{
        CreateName("", "", "test");
    }
    catch(const string &e){
        cout<<e<<endl;
    }
    // valid input, both first and last name
    try{
        CreateName("test", "", "test");
    }
    catch(const string &e){
        cout<<e<<endl;
    }
    // valid input, with middle name
    try{
        CreateName("test", "test", "test");
    }
    catch(const string &e){
        cout<<e<<endl;
    }
}

int main(){
    Name::UnitTestName();
    return 0;
}
