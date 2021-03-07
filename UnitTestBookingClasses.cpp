#include "BookingClasses.h"

void ACFirstClass::UnitTest(){
    const ACFirstClass &obj = ACFirstClass::Type();
    const ACFirstClass &objCopy = ACFirstClass::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"ACFirstClass is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "AC First Class")
        cout<<"GetName() returns incorrect value in ACFirstClass."<<endl;
    if(abs(obj.GetLoadFactor()-3.0)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in ACFirstClass."<<endl;
    if(obj.GetNumberOfTiers() != 2)
        cout<<"GetNumberOfTiers() returns incorrect value in ACFirstClass."<<endl;
    if(obj.IsSitting() != false)
        cout<<"IsSitting() returns incorrect value in ACFirstClass."<<endl;
    if(obj.IsAC() != true)
        cout<<"IsAC() returns incorrect value in ACFirstClass."<<endl;
    if(obj.IsLuxury() != true)
        cout<<"IsLuxury() returns incorrect value in ACFirstClass."<<endl;

    // check output streaming operator
    cout<<ACFirstClass::Type()<<endl;
}

void AC2Tier::UnitTest(){
    const AC2Tier &obj = AC2Tier::Type();
    const AC2Tier &objCopy = AC2Tier::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"AC2Tier is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "AC 2 Tier")
        cout<<"GetName() returns incorrect value in AC2Tier."<<endl;
    if(abs(obj.GetLoadFactor()-2.0)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in AC2Tier."<<endl;
    if(obj.GetNumberOfTiers() != 2)
        cout<<"GetNumberOfTiers() returns incorrect value in AC2Tier."<<endl;
    if(obj.IsSitting() != false)
        cout<<"IsSitting() returns incorrect value in AC2Tier."<<endl;
    if(obj.IsAC() != true)
        cout<<"IsAC() returns incorrect value in AC2Tier."<<endl;
    if(obj.IsLuxury() != false)
        cout<<"IsLuxury() returns incorrect value in AC2Tier."<<endl;

    // check output streaming operator
    cout<<AC2Tier::Type()<<endl;
}

void FirstClass::UnitTest(){
    const FirstClass &obj = FirstClass::Type();
    const FirstClass &objCopy = FirstClass::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"FirstClass is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "First Class")
        cout<<"GetName() returns incorrect value in FirstClass."<<endl;
    if(abs(obj.GetLoadFactor()-2.0)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in FirstClass."<<endl;
    if(obj.GetNumberOfTiers() != 2)
        cout<<"GetNumberOfTiers() returns incorrect value in FirstClass."<<endl;
    if(obj.IsSitting() != false)
        cout<<"IsSitting() returns incorrect value in FirstClass."<<endl;
    if(obj.IsAC() != false)
        cout<<"IsAC() returns incorrect value in FirstClass."<<endl;
    if(obj.IsLuxury() != true)
        cout<<"IsLuxury() returns incorrect value in FirstClass."<<endl;

    // check output streaming operator
    cout<<FirstClass::Type()<<endl;
}

void AC3Tier::UnitTest(){
    const AC3Tier &obj = AC3Tier::Type();
    const AC3Tier &objCopy = AC3Tier::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"AC3Tier is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "AC 3 Tier")
        cout<<"GetName() returns incorrect value in AC3Tier."<<endl;
    if(abs(obj.GetLoadFactor()-1.75)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in AC3Tier."<<endl;
    if(obj.GetNumberOfTiers() != 3)
        cout<<"GetNumberOfTiers() returns incorrect value in AC3Tier."<<endl;
    if(obj.IsSitting() != false)
        cout<<"IsSitting() returns incorrect value in AC3Tier."<<endl;
    if(obj.IsAC() != true)
        cout<<"IsAC() returns incorrect value in AC3Tier."<<endl;
    if(obj.IsLuxury() != false)
        cout<<"IsLuxury() returns incorrect value in AC3Tier."<<endl;

    // check output streaming operator
    cout<<AC3Tier::Type()<<endl;
}

int main(){
    ACFirstClass::UnitTest();
    AC2Tier::UnitTest();
    FirstClass::UnitTest();
    AC3Tier::UnitTest();
    //ACChairCar::UnitTest();
    //Sleeper::UnitTest();
    //SecondSitting::UnitTest();
    return 0;
}