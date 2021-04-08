// Nisarg Upadhyaya
// 19CS30031

#include "Gender.h"

Gender::Gender(const string &name) : name_(name) {
    #ifdef _DEBUG
    cout<<"Gender "<<name_<<" constructed"<<endl;
    #endif
}
Gender::~Gender() {
    #ifdef _DEBUG
    cout<<"Gender "<<name_<<" destructed"<<endl;
    #endif
}

// Names defined as static constants
template<> const string Gender::Male::sName = "Male";
template<> const string Gender::Female::sName = "Female";

// Salutations defined as static constants
template<> const string Gender::Male::sSalutation = "Mr.";
template<> const string Gender::Female::sSalutation = "Ms.";
