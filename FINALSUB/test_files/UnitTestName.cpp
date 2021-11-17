// Nisarg Upadhyaya
// 19CS30031

#include "Name.h"
#include "Exceptions.h"

void Name::UnitTestName(){
    // invalid input, all fields empty
    try{
        CreateName("", "", "");
    }
    catch(const Invalid_Name &e){
        cout<<e.what()<<endl;
    }
    // invalid input, first and last name empty
    try{
        CreateName("", "test", "");
    }
    catch(const Invalid_Name &e){
        cout<<e.what()<<endl;
    }
    // valid input, only first name
    try{
        CreateName("test", "", "");
    }
    catch(const Invalid_Name &e){
        cout<<e.what()<<endl;
    }
    // valid input, only last name
    try{
        CreateName("", "", "test");
    }
    catch(const Invalid_Name &e){
        cout<<e.what()<<endl;
    }
    // valid input, both first and last name
    try{
        CreateName("test", "", "test");
    }
    catch(const Invalid_Name &e){
        cout<<e.what()<<endl;
    }
    // valid input, with middle name
    try{
        CreateName("test", "test", "test");
    }
    catch(const Invalid_Name &e){
        cout<<e.what()<<endl;
    }
}

int main(){
    Name::UnitTestName();
    return 0;
}
