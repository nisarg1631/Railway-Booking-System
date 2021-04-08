// Nisarg Upadhyaya
// 19CS30031

#include "Gender.h"

template<>
void Gender::Male::UnitTest(){
    const Gender &obj = Gender::Male::Type();
    const Gender &objCopy = Gender::Male::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Male")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.GetTitle() != "Mr.")
        cout<<"Failed GetTitle test. Line number: "<<__LINE__<<endl;
    if(!Gender::IsMale(obj))
        cout<<"Failed IsMale test. Line number: "<<__LINE__<<endl;
}

template<>
void Gender::Female::UnitTest(){
    const Gender &obj = Gender::Female::Type();
    const Gender &objCopy = Gender::Female::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Female")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.GetTitle() != "Ms.")
        cout<<"Failed GetTitle test. Line number: "<<__LINE__<<endl;
    if(Gender::IsMale(obj))
        cout<<"Failed IsMale test. Line number: "<<__LINE__<<endl;
}

int main(){
    Gender::Male::UnitTest();
    Gender::Female::UnitTest();
    return 0;
}