// Nisarg Upadhyaya
// 19CS30031

#include "BookingClasses.h"

template<>
void BookingClasses::ACFirstClass::UnitTest(){
    const BookingClasses &obj = BookingClasses::ACFirstClass::Type();
    const BookingClasses &objCopy = BookingClasses::ACFirstClass::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "AC First Class")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != true)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != true)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != false)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 2U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-6.5) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-400.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-500.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 500U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::ACFirstClass::Type()<<endl;
}

template<>
void BookingClasses::ExecutiveChairCar::UnitTest(){
    const BookingClasses &obj = BookingClasses::ExecutiveChairCar::Type();
    const BookingClasses &objCopy = BookingClasses::ExecutiveChairCar::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Executive Chair Car")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != true)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != true)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != true)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 0U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-5.0) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-400.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-500.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 250U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::ExecutiveChairCar::Type()<<endl;
}

template<>
void BookingClasses::AC2Tier::UnitTest(){
    const BookingClasses &obj = BookingClasses::AC2Tier::Type();
    const BookingClasses &objCopy = BookingClasses::AC2Tier::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "AC 2 Tier")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != true)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != false)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != false)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 2U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-4.0) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-400.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-500.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 500U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::AC2Tier::Type()<<endl;
}

template<>
void BookingClasses::FirstClass::UnitTest(){
    const BookingClasses &obj = BookingClasses::FirstClass::Type();
    const BookingClasses &objCopy = BookingClasses::FirstClass::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "First Class")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != false)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != true)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != false)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 2U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-3.0) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-400.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-500.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 500U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::FirstClass::Type()<<endl;
}

template<>
void BookingClasses::AC3Tier::UnitTest(){
    const BookingClasses &obj = BookingClasses::AC3Tier::Type();
    const BookingClasses &objCopy = BookingClasses::AC3Tier::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "AC 3 Tier")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != true)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != false)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != false)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 3U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-2.5) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-300.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-400.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 500U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::AC3Tier::Type()<<endl;
}

template<>
void BookingClasses::ACChairCar::UnitTest(){
    const BookingClasses &obj = BookingClasses::ACChairCar::Type();
    const BookingClasses &objCopy = BookingClasses::ACChairCar::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "AC Chair Car")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != true)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != false)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != true)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 0U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-2.0) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-125.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-225.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 250U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::ACChairCar::Type()<<endl;
}

template<>
void BookingClasses::Sleeper::UnitTest(){
    const BookingClasses &obj = BookingClasses::Sleeper::Type();
    const BookingClasses &objCopy = BookingClasses::Sleeper::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Sleeper")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != false)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != false)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != false)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 3U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-1.0) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.3) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-100.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-200.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 500U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::Sleeper::Type()<<endl;
}

template<>
void BookingClasses::SecondSitting::UnitTest(){
    const BookingClasses &obj = BookingClasses::SecondSitting::Type();
    const BookingClasses &objCopy = BookingClasses::SecondSitting::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Failed singleton test. Line number: "<<__LINE__<<endl;
    
    // check all methods
    if(obj.GetName() != "Second Sitting")
        cout<<"Failed GetName test. Line number: "<<__LINE__<<endl;
    if(obj.IsAC() != false)
        cout<<"Failed IsAC test. Line number: "<<__LINE__<<endl;
    if(obj.IsLuxury() != false)
        cout<<"Failed IsLuxury test. Line number: "<<__LINE__<<endl;
    if(obj.IsSitting() != true)
        cout<<"Failed IsSitting test. Line number: "<<__LINE__<<endl;
    if(obj.GetNumberOfTiers() != 0U)
        cout<<"Failed GetNumberOfTiers test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetLoadFactor()-0.6) > 1e-6)
        cout<<"Failed GetLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetTatkalLoadFactor()-0.1) > 1e-6)
        cout<<"Failed GetTatkalLoadFactor test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMinimumTatkalCharge()-10.0) > 1e-6)
        cout<<"Failed GetMinimumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(abs(obj.GetMaximumTatkalCharge()-15.0) > 1e-6)
        cout<<"Failed GetMaximumTatkalCharge test. Line number: "<<__LINE__<<endl;
    if(obj.GetMinimumTatkalDistance() != 100U)
        cout<<"Failed GetMinimumTatkalDistance test. Line number: "<<__LINE__<<endl;

    // check output streaming operator
    cout<<BookingClasses::SecondSitting::Type()<<endl;
}

int main(){
    BookingClasses::ACFirstClass::UnitTest();
    BookingClasses::ExecutiveChairCar::UnitTest();
    BookingClasses::AC2Tier::UnitTest();
    BookingClasses::FirstClass::UnitTest();
    BookingClasses::AC3Tier::UnitTest();
    BookingClasses::ACChairCar::UnitTest();
    BookingClasses::Sleeper::UnitTest();
    BookingClasses::SecondSitting::UnitTest();
    return 0;
}
