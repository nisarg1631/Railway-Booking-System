// Nisarg Upadhyaya
// 19CS30031

#include <regex>

#include "Passenger.h"

Passenger::Passenger(const Name &name, const string &aadharNum, const string &mobileNum, const Date &dateOfBirth, const Gender &gender, const Divyaang &disabilityType, const string &disabilityID) : name_(name), aadharNum_(aadharNum), mobileNum_(mobileNum), dateOfBirth_(dateOfBirth), gender_(gender), disabilityType_(disabilityType), disabilityID_(disabilityID) {
    #ifdef _DEBUG
    cout<<"Passenger "<<name_<<" constructed."<<endl;
    #endif
}
Passenger::Passenger(const Passenger &passenger) : name_(passenger.name_), aadharNum_(passenger.aadharNum_), mobileNum_(passenger.mobileNum_), dateOfBirth_(passenger.dateOfBirth_), gender_(passenger.gender_), disabilityType_(passenger.disabilityType_), disabilityID_(passenger.disabilityID_) {}
Passenger::~Passenger(){
    #ifdef _DEBUG
    cout<<"Passenger "<<name_<<" destructed."<<endl;
    #endif
}

Passenger Passenger::CreatePassenger(const Name &name, const string &aadharNum, const string &mobileNum, const Date &dateOfBirth, const Gender &gender, const Divyaang &disabilityType, const string &disabilityID){
    if(!regex_match(aadharNum, regex("[0-9]{12}"))) // if aadhar number is invalid
        throw string("Invalid aadhar number.");
    if(!mobileNum.empty() && !regex_match(mobileNum, regex("[0-9]{10}"))) // if mobile number is provided and is invalid
        throw string("Invalid mobile number.");
    if(!disabilityID.empty() && !regex_match(disabilityID, regex("[0-9]+"))) // if disability id is provided and is invalid
        throw string("Invalid disability ID.");
    return Passenger(name, aadharNum, mobileNum, dateOfBirth, gender, disabilityType, disabilityID);
}

ostream &operator<<(ostream &os, const Passenger &passenger){
    os<<"\t-Name: "<<passenger.GetGender().GetTitle()<<" "<<passenger.GetName()<<endl;
    os<<"\t-Aadhar: "<<passenger.GetAadharNum()<<endl;
    os<<"\t-Mobile: "<< (passenger.GetMobileNum().empty() ? "Not provided" : passenger.GetMobileNum()) <<endl;
    os<<"\t-DOB: "<<passenger.GetDateOfBirth()<<endl;
    os<<"\t-Gender: "<<passenger.GetGender()<<endl;
    os<<"\t-Disability: "<<passenger.GetDisabilityType()<<endl;
    os<<"\t-Disability ID: "<< (passenger.GetDisabilityID().empty() ? "Not provided" : passenger.GetDisabilityID());
    return os;
}
