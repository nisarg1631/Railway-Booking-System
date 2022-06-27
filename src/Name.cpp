// Nisarg Upadhyaya
// 19CS30031

#include "Name.h"
#include "Exceptions.h"

// constructor and destructor
Name::Name(string firstName, string middleName, string lastName) : firstName_(firstName), middleName_(middleName), lastName_(lastName) {
    #ifdef _DEBUG
    cout<<"Name "<<*this<<" constructed."<<endl;
    #endif
}
Name::Name(const Name &name) : firstName_(name.firstName_), middleName_(name.middleName_), lastName_(name.lastName_) {}
Name::~Name(){
    #ifdef _DEBUG
    cout<<"Name "<<*this<<" destructed."<<endl;
    #endif
}

Name Name::CreateName(const string &firstName, const string &middleName, const string &lastName){
    if(firstName.empty() && lastName.empty())
        throw Invalid_Name();
    return Name(firstName, middleName, lastName);
}

string Name::ToString() const{
    string name = "";
    if(!firstName_.empty())
        name += (firstName_ + " ");
    if(!middleName_.empty() && !firstName_.empty()) // add middle name only if first name is present
        name += (middleName_ + " ");
    if(!lastName_.empty())
        name += (lastName_);
    return name; 
}

ostream &operator<<(ostream &os, const Name &name){
    os<<name.ToString();
    return os;
}