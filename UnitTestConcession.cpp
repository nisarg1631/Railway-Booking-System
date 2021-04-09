// Nisarg Upadhyaya
// 19CS30031

#include "Concession.h"

void GeneralConcession::UnitTest(){
    const GeneralConcession &obj = GeneralConcession::Type();
    const GeneralConcession &objCopy = GeneralConcession::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;

    // check method
    if(abs(obj.GetConcessionFactor()-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
}
void LadiesConcession::UnitTest(){
    const LadiesConcession &obj = LadiesConcession::Type();
    const LadiesConcession &objCopy = LadiesConcession::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;

    // create dummy passenger for checking GetConcessionFactor method
    try{
        Passenger p(Passenger::CreatePassenger(
            Name::CreateName("Krupa", "", "Upadhyaya"), 
            "123456781234",
            "9876543210",
            Date::CreateDate("16/03/2001"),
            Gender::Female::Type(),
            Divyaang::None::Type(),
            ""));
        // check method
        if(abs(obj.GetConcessionFactor(p)-0.0) > 1e-6)
            cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    }
    catch(const string& e){
        std::cerr << e << '\n';
    }
}
void SeniorCitizenConcession::UnitTest(){
    const SeniorCitizenConcession &obj = SeniorCitizenConcession::Type();
    const SeniorCitizenConcession &objCopy = SeniorCitizenConcession::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;

    // create dummy passenger for checking GetConcessionFactor method
    try{
        Passenger p(Passenger::CreatePassenger(
            Name::CreateName("Kirtika", "", "Upadhyaya"), 
            "123456781234",
            "9876543210",
            Date::CreateDate("16/03/2001"),
            Gender::Female::Type(),
            Divyaang::None::Type(),
            ""));
        // check method
        if(abs(obj.GetConcessionFactor(p)-0.5) > 1e-6)
            cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    }
    catch(const string& e){
        std::cerr << e << '\n';
    }
}
void DivyaangConcession::UnitTest(){
    const DivyaangConcession &obj = DivyaangConcession::Type();
    const DivyaangConcession &objCopy = DivyaangConcession::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;

    // create dummy passenger for checking GetConcessionFactor method
    try{
        Passenger p(Passenger::CreatePassenger(
            Name::CreateName("Test", "", "Passenger"), 
            "123456781234",
            "9876543210",
            Date::CreateDate("16/03/2001"),
            Gender::Male::Type(),
            Divyaang::CancerPatient::Type(),
            ""));
        // check method
        if(abs(obj.GetConcessionFactor(p, BookingClasses::ACFirstClass::Type())-0.5) > 1e-6)
            cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    }
    catch(const string& e){
        std::cerr << e << '\n';
    }
}

int main(){
    GeneralConcession::UnitTest();
    LadiesConcession::UnitTest();
    SeniorCitizenConcession::UnitTest();
    DivyaangConcession::UnitTest();
    return 0;
}