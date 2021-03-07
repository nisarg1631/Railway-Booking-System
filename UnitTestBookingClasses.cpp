// Nisarg Upadhyaya
// 19CS30031

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
    if(obj.GetNumberOfTiers() != 2U)
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
    if(obj.GetNumberOfTiers() != 2U)
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
    if(obj.GetNumberOfTiers() != 2U)
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
    if(obj.GetNumberOfTiers() != 3U)
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

void ACChairCar::UnitTest(){
    const ACChairCar &obj = ACChairCar::Type();
    const ACChairCar &objCopy = ACChairCar::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"ACChairCar is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "AC Chair Car")
        cout<<"GetName() returns incorrect value in ACChairCar."<<endl;
    if(abs(obj.GetLoadFactor()-1.25)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in ACChairCar."<<endl;
    if(obj.GetNumberOfTiers() != 0U)
        cout<<"GetNumberOfTiers() returns incorrect value in ACChairCar."<<endl;
    if(obj.IsSitting() != true)
        cout<<"IsSitting() returns incorrect value in ACChairCar."<<endl;
    if(obj.IsAC() != true)
        cout<<"IsAC() returns incorrect value in ACChairCar."<<endl;
    if(obj.IsLuxury() != false)
        cout<<"IsLuxury() returns incorrect value in ACChairCar."<<endl;

    // check output streaming operator
    cout<<ACChairCar::Type()<<endl;
}

void Sleeper::UnitTest(){
    const Sleeper &obj = Sleeper::Type();
    const Sleeper &objCopy = Sleeper::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"Sleeper is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "Sleeper")
        cout<<"GetName() returns incorrect value in Sleeper."<<endl;
    if(abs(obj.GetLoadFactor()-1.0)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in Sleeper."<<endl;
    if(obj.GetNumberOfTiers() != 3U)
        cout<<"GetNumberOfTiers() returns incorrect value in Sleeper."<<endl;
    if(obj.IsSitting() != false)
        cout<<"IsSitting() returns incorrect value in Sleeper."<<endl;
    if(obj.IsAC() != false)
        cout<<"IsAC() returns incorrect value in Sleeper."<<endl;
    if(obj.IsLuxury() != false)
        cout<<"IsLuxury() returns incorrect value in Sleeper."<<endl;

    // check output streaming operator
    cout<<Sleeper::Type()<<endl;
}

void SecondSitting::UnitTest(){
    const SecondSitting &obj = SecondSitting::Type();
    const SecondSitting &objCopy = SecondSitting::Type();

    // check for singleton
    if(&obj != &objCopy)
        cout<<"SecondSitting is not singleton."<<endl;
    
    // check all methods
    if(obj.GetName() != "Second Sitting")
        cout<<"GetName() returns incorrect value in SecondSitting."<<endl;
    if(abs(obj.GetLoadFactor()-0.5)>1e-6)
        cout<<"GetLoadFactor() returns incorrect value in SecondSitting."<<endl;
    if(obj.GetNumberOfTiers() != 0U)
        cout<<"GetNumberOfTiers() returns incorrect value in SecondSitting."<<endl;
    if(obj.IsSitting() != true)
        cout<<"IsSitting() returns incorrect value in SecondSitting."<<endl;
    if(obj.IsAC() != false)
        cout<<"IsAC() returns incorrect value in SecondSitting."<<endl;
    if(obj.IsLuxury() != false)
        cout<<"IsLuxury() returns incorrect value in SecondSitting."<<endl;

    // check output streaming operator
    cout<<SecondSitting::Type()<<endl;
}

// checking the abstract base classes in the hierarchy through specialized classes

void BookingClasses::UnitTest(){
    const BookingClasses &obj = ACFirstClass::Type();

    if(obj.GetName() != "AC First Class")
        cout<<"GetName() returns incorrect value in BookingClasses."<<endl;
    if(obj.IsAC() != true)
        cout<<"IsAC() returns incorrect value in BookingClasses."<<endl;
}

void SittingClasses::UnitTest(){
    const SittingClasses &obj = ACChairCar::Type();

    if(obj.IsSitting() != true)
        cout<<"IsSitting() returns incorrect value in SittingClasses."<<endl;
    if(obj.GetNumberOfTiers() != 0U)
        cout<<"GetNumberOfTiers() returns incorrect value in SittingClasses."<<endl;
}

void SleepingClasses::UnitTest(){
    const SleepingClasses &obj = ACFirstClass::Type();

    if(obj.IsSitting() != false)
        cout<<"IsSitting() returns incorrect value in SleepingClasses."<<endl;
}

void Sleeping2Tier::UnitTest(){
    const Sleeping2Tier &obj = ACFirstClass::Type();

    if(obj.GetNumberOfTiers() != 2U)
        cout<<"GetNumberOfTiers() returns incorrect value in Sleeping2Tier."<<endl;    
}

void Sleeping3Tier::UnitTest(){
    const Sleeping3Tier &obj = AC3Tier::Type();

    if(obj.GetNumberOfTiers() != 3U)
        cout<<"GetNumberOfTiers() returns incorrect value in Sleeping3Tier."<<endl;    
}

int main(){
    ACFirstClass::UnitTest();
    AC2Tier::UnitTest();
    FirstClass::UnitTest();
    AC3Tier::UnitTest();
    ACChairCar::UnitTest();
    Sleeper::UnitTest();
    SecondSitting::UnitTest();
    BookingClasses::UnitTest();
    SittingClasses::UnitTest();
    SleepingClasses::UnitTest();
    Sleeping2Tier::UnitTest();
    Sleeping3Tier::UnitTest();
    return 0;
}