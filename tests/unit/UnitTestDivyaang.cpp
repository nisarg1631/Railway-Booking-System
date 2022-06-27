// Nisarg Upadhyaya
// 19CS30031

#include "Divyaang.h"

template<>
void Divyaang::Blind::UnitTest(){
    const Divyaang &obj = Divyaang::Blind::Type();
    const Divyaang &objCopy = Divyaang::Blind::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Blind")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACFirstClass::Type())-0.5) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ExecutiveChairCar::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC2Tier::Type())-0.5) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::FirstClass::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC3Tier::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACChairCar::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::Sleeper::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::SecondSitting::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
}

template<>
void Divyaang::OrthopaedicallyHandicaped::UnitTest(){
    const Divyaang &obj = Divyaang::OrthopaedicallyHandicaped::Type();
    const Divyaang &objCopy = Divyaang::OrthopaedicallyHandicaped::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Orthopaedically Handicaped")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACFirstClass::Type())-0.5) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ExecutiveChairCar::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC2Tier::Type())-0.5) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::FirstClass::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC3Tier::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACChairCar::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::Sleeper::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::SecondSitting::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
}

template<>
void Divyaang::CancerPatient::UnitTest(){
    const Divyaang &obj = Divyaang::CancerPatient::Type();
    const Divyaang &objCopy = Divyaang::CancerPatient::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Cancer Patient")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACFirstClass::Type())-0.5) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ExecutiveChairCar::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC2Tier::Type())-0.5) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::FirstClass::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC3Tier::Type())-1.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACChairCar::Type())-1.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::Sleeper::Type())-1.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::SecondSitting::Type())-1.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
}

template<>
void Divyaang::TBPatient::UnitTest(){
    const Divyaang &obj = Divyaang::TBPatient::Type();
    const Divyaang &objCopy = Divyaang::TBPatient::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "TB Patient")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACFirstClass::Type())-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ExecutiveChairCar::Type())-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC2Tier::Type())-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::FirstClass::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::AC3Tier::Type())-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::ACChairCar::Type())-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::Sleeper::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetConcessionFactor(BookingClasses::SecondSitting::Type())-0.75) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
}

template<>
void Divyaang::None::UnitTest(){
    const Divyaang &obj = Divyaang::None::Type();
    const Divyaang &objCopy = Divyaang::None::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // For Divyaang::None the GetConcessionFactor is set to return 0 for any booking class, we check it for sleeper only
    if(abs(obj.GetConcessionFactor(BookingClasses::Sleeper::Type())-0.0) > 1e-6)
        cout<<"Failed GetConcessionFactor test. Line number: "<<__LINE__<<endl;
}

int main(){
    Divyaang::Blind::UnitTest();
    Divyaang::OrthopaedicallyHandicaped::UnitTest();
    Divyaang::CancerPatient::UnitTest();
    Divyaang::TBPatient::UnitTest();
    Divyaang::None::UnitTest();
    return 0;
}
