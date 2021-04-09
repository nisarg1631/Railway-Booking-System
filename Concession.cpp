// Nisarg Upadhyaya
// 19CS30031

#include "Concession.h"

// initialising statics
const string GeneralConcession::sName = "General Concession";
const string LadiesConcession::sName = "Ladies Concession";
const string SeniorCitizenConcession::sName = "Senior Citizen Concession";
const string DivyaangConcession::sName = "Divyaang Concession";

// concession class
Concession::Concession(const string &name) : name_(name) {
    #ifdef _DEBUG
    cout<<"Concession "<<name_<<" constructed."<<endl;
    #endif
}
Concession::~Concession(){
    #ifdef _DEBUG
    cout<<"Concession "<<name_<<" destructed."<<endl;
    #endif
}

// general concession class
GeneralConcession::GeneralConcession() : Concession(sName) {}
GeneralConcession::~GeneralConcession() {}

// ladies concession class
LadiesConcession::LadiesConcession() : Concession(sName) {}
LadiesConcession::~LadiesConcession() {}

// senior citizen concession class
SeniorCitizenConcession::SeniorCitizenConcession() : Concession(sName) {}
SeniorCitizenConcession::~SeniorCitizenConcession() {}

// divyaang concession class
DivyaangConcession::DivyaangConcession() : Concession(sName) {}
DivyaangConcession::~DivyaangConcession() {}
