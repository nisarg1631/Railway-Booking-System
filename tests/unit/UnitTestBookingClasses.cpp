// Nisarg Upadhyaya
// 19CS30031

#define CATCH_CONFIG_MAIN

#include "BookingClasses.h"
#include "catch.hpp"

// changeable parameters of various booking classes
template<> const bool BookingClasses::ACFirstClass::sLuxury = true;
template<> const double BookingClasses::ACFirstClass::sLoadFactor = 6.50;
template<> const double BookingClasses::ACFirstClass::sReservationCharge = 60.00;
template<> const double BookingClasses::ACFirstClass::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::ACFirstClass::sMinimumTatkalCharge = 400.00;
template<> const double BookingClasses::ACFirstClass::sMaximumTatkalCharge = 500.00;
template<> const uint32_t BookingClasses::ACFirstClass::sMinimumTatkalDistance = 500;

template<> const bool BookingClasses::ExecutiveChairCar::sLuxury = true;
template<> const double BookingClasses::ExecutiveChairCar::sLoadFactor = 5.00;
template<> const double BookingClasses::ExecutiveChairCar::sReservationCharge = 60.00;
template<> const double BookingClasses::ExecutiveChairCar::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::ExecutiveChairCar::sMinimumTatkalCharge = 400.00;
template<> const double BookingClasses::ExecutiveChairCar::sMaximumTatkalCharge = 500.00;
template<> const uint32_t BookingClasses::ExecutiveChairCar::sMinimumTatkalDistance = 250;

template<> const bool BookingClasses::AC2Tier::sLuxury = false;
template<> const double BookingClasses::AC2Tier::sLoadFactor = 4.00;
template<> const double BookingClasses::AC2Tier::sReservationCharge = 50.00;
template<> const double BookingClasses::AC2Tier::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::AC2Tier::sMinimumTatkalCharge = 400.00;
template<> const double BookingClasses::AC2Tier::sMaximumTatkalCharge = 500.00;
template<> const uint32_t BookingClasses::AC2Tier::sMinimumTatkalDistance = 500;

template<> const bool BookingClasses::FirstClass::sLuxury = true;
template<> const double BookingClasses::FirstClass::sLoadFactor = 3.00;
template<> const double BookingClasses::FirstClass::sReservationCharge = 50.00;
template<> const double BookingClasses::FirstClass::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::FirstClass::sMinimumTatkalCharge = 400.00;
template<> const double BookingClasses::FirstClass::sMaximumTatkalCharge = 500.00;
template<> const uint32_t BookingClasses::FirstClass::sMinimumTatkalDistance = 500;

template<> const bool BookingClasses::AC3Tier::sLuxury = false;
template<> const double BookingClasses::AC3Tier::sLoadFactor = 2.50;
template<> const double BookingClasses::AC3Tier::sReservationCharge = 40.00;
template<> const double BookingClasses::AC3Tier::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::AC3Tier::sMinimumTatkalCharge = 300.00;
template<> const double BookingClasses::AC3Tier::sMaximumTatkalCharge = 400.00;
template<> const uint32_t BookingClasses::AC3Tier::sMinimumTatkalDistance = 500;

template<> const bool BookingClasses::ACChairCar::sLuxury = false;
template<> const double BookingClasses::ACChairCar::sLoadFactor = 2.00;
template<> const double BookingClasses::ACChairCar::sReservationCharge = 40.00;
template<> const double BookingClasses::ACChairCar::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::ACChairCar::sMinimumTatkalCharge = 125.00;
template<> const double BookingClasses::ACChairCar::sMaximumTatkalCharge = 225.00;
template<> const uint32_t BookingClasses::ACChairCar::sMinimumTatkalDistance = 250;

template<> const bool BookingClasses::Sleeper::sLuxury = false;
template<> const double BookingClasses::Sleeper::sLoadFactor = 1.00;
template<> const double BookingClasses::Sleeper::sReservationCharge = 20.00;
template<> const double BookingClasses::Sleeper::sTatkalLoadFactor = 0.30;
template<> const double BookingClasses::Sleeper::sMinimumTatkalCharge = 100.00;
template<> const double BookingClasses::Sleeper::sMaximumTatkalCharge = 200.00;
template<> const uint32_t BookingClasses::Sleeper::sMinimumTatkalDistance = 500;

template<> const bool BookingClasses::SecondSitting::sLuxury = false;
template<> const double BookingClasses::SecondSitting::sLoadFactor = 0.60;
template<> const double BookingClasses::SecondSitting::sReservationCharge = 15.00;
template<> const double BookingClasses::SecondSitting::sTatkalLoadFactor = 0.10;
template<> const double BookingClasses::SecondSitting::sMinimumTatkalCharge = 10.00;
template<> const double BookingClasses::SecondSitting::sMaximumTatkalCharge = 15.00;
template<> const uint32_t BookingClasses::SecondSitting::sMinimumTatkalDistance = 100;

// divyaang concession factors of various classes
template<> const double BookingClasses::ACFirstClass::sBlindConcessionFactor = 0.50;
template<> const double BookingClasses::ACFirstClass::sOrthopaedicallyHandicapedConcessionFactor = 0.50;
template<> const double BookingClasses::ACFirstClass::sCancerConcessionFactor = 0.50;
template<> const double BookingClasses::ACFirstClass::sTBConcessionFactor = 0.00;

template<> const double BookingClasses::ExecutiveChairCar::sBlindConcessionFactor = 0.75;
template<> const double BookingClasses::ExecutiveChairCar::sOrthopaedicallyHandicapedConcessionFactor = 0.75;
template<> const double BookingClasses::ExecutiveChairCar::sCancerConcessionFactor = 0.75;
template<> const double BookingClasses::ExecutiveChairCar::sTBConcessionFactor = 0.00;

template<> const double BookingClasses::AC2Tier::sBlindConcessionFactor = 0.50;
template<> const double BookingClasses::AC2Tier::sOrthopaedicallyHandicapedConcessionFactor = 0.50;
template<> const double BookingClasses::AC2Tier::sCancerConcessionFactor = 0.50;
template<> const double BookingClasses::AC2Tier::sTBConcessionFactor = 0.00;

template<> const double BookingClasses::FirstClass::sBlindConcessionFactor = 0.75;
template<> const double BookingClasses::FirstClass::sOrthopaedicallyHandicapedConcessionFactor = 0.75;
template<> const double BookingClasses::FirstClass::sCancerConcessionFactor = 0.75;
template<> const double BookingClasses::FirstClass::sTBConcessionFactor = 0.75;

template<> const double BookingClasses::AC3Tier::sBlindConcessionFactor = 0.75;
template<> const double BookingClasses::AC3Tier::sOrthopaedicallyHandicapedConcessionFactor = 0.75;
template<> const double BookingClasses::AC3Tier::sCancerConcessionFactor = 1.00;
template<> const double BookingClasses::AC3Tier::sTBConcessionFactor = 0.00;

template<> const double BookingClasses::ACChairCar::sBlindConcessionFactor = 0.75;
template<> const double BookingClasses::ACChairCar::sOrthopaedicallyHandicapedConcessionFactor = 0.75;
template<> const double BookingClasses::ACChairCar::sCancerConcessionFactor = 1.00;
template<> const double BookingClasses::ACChairCar::sTBConcessionFactor = 0.00;

template<> const double BookingClasses::Sleeper::sBlindConcessionFactor = 0.75;
template<> const double BookingClasses::Sleeper::sOrthopaedicallyHandicapedConcessionFactor = 0.75;
template<> const double BookingClasses::Sleeper::sCancerConcessionFactor = 1.00;
template<> const double BookingClasses::Sleeper::sTBConcessionFactor = 0.75;

template<> const double BookingClasses::SecondSitting::sBlindConcessionFactor = 0.75;
template<> const double BookingClasses::SecondSitting::sOrthopaedicallyHandicapedConcessionFactor = 0.75;
template<> const double BookingClasses::SecondSitting::sCancerConcessionFactor = 1.00;
template<> const double BookingClasses::SecondSitting::sTBConcessionFactor = 0.75;

TEST_CASE( "ACFirstClass test case", "[ACFirstClass]" ) {
    const BookingClasses &obj = BookingClasses::ACFirstClass::Type();
    const BookingClasses &objCopy = BookingClasses::ACFirstClass::Type();
    
    // check for singleton
    REQUIRE( &obj == &objCopy );

    // check all methods
    REQUIRE( obj.GetName() == "AC First Class" );
    REQUIRE( obj.IsAC() == true );
    REQUIRE( obj.IsLuxury() == true );
    REQUIRE( obj.IsSitting() == false );
    REQUIRE( obj.GetNumberOfTiers() == 2U );
    REQUIRE( abs(obj.GetLoadFactor()-6.5) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-400.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-500.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 500U );

    // check output streaming operator
    cout<<BookingClasses::ACFirstClass::Type()<<endl;
}

TEST_CASE( "ExecutiveChairCar test case", "[ExecutiveChairCar]" ) {
    const BookingClasses &obj = BookingClasses::ExecutiveChairCar::Type();
    const BookingClasses &objCopy = BookingClasses::ExecutiveChairCar::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "Executive Chair Car" );
    REQUIRE( obj.IsAC() == true );
    REQUIRE( obj.IsLuxury() == true );
    REQUIRE( obj.IsSitting() == true );
    REQUIRE( obj.GetNumberOfTiers() == 0U );
    REQUIRE( abs(obj.GetLoadFactor()-5.0) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-400.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-500.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 250U );

    // check output streaming operator
    cout<<BookingClasses::ExecutiveChairCar::Type()<<endl;
}

TEST_CASE( "AC2Tier test case", "[AC2Tier]" ) {
    const BookingClasses &obj = BookingClasses::AC2Tier::Type();
    const BookingClasses &objCopy = BookingClasses::AC2Tier::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "AC 2 Tier" );
    REQUIRE( obj.IsAC() == true );
    REQUIRE( obj.IsLuxury() == false );
    REQUIRE( obj.IsSitting() == false );
    REQUIRE( obj.GetNumberOfTiers() == 2U );
    REQUIRE( abs(obj.GetLoadFactor()-4.0) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-400.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-500.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 500U );

    // check output streaming operator
    cout<<BookingClasses::AC2Tier::Type()<<endl;
}

TEST_CASE( "FirstClass test case", "[FirstClass]" ) {
    const BookingClasses &obj = BookingClasses::FirstClass::Type();
    const BookingClasses &objCopy = BookingClasses::FirstClass::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "First Class" );
    REQUIRE( obj.IsAC() == false );
    REQUIRE( obj.IsLuxury() == true );
    REQUIRE( obj.IsSitting() == false );
    REQUIRE( obj.GetNumberOfTiers() == 2U );
    REQUIRE( abs(obj.GetLoadFactor()-3.0) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-400.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-500.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 500U );

    // check output streaming operator
    cout<<BookingClasses::FirstClass::Type()<<endl;
}

TEST_CASE( "AC3Tier test case", "[AC3Tier]" ) {
    const BookingClasses &obj = BookingClasses::AC3Tier::Type();
    const BookingClasses &objCopy = BookingClasses::AC3Tier::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "AC 3 Tier" );
    REQUIRE( obj.IsAC() == true );
    REQUIRE( obj.IsLuxury() == false );
    REQUIRE( obj.IsSitting() == false );
    REQUIRE( obj.GetNumberOfTiers() == 3U );
    REQUIRE( abs(obj.GetLoadFactor()-2.5) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-300.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-400.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 500U );

    // check output streaming operator
    cout<<BookingClasses::AC3Tier::Type()<<endl;
}

TEST_CASE( "ACChairCar test case", "[ACChairCar]" ) {
    const BookingClasses &obj = BookingClasses::ACChairCar::Type();
    const BookingClasses &objCopy = BookingClasses::ACChairCar::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "AC Chair Car" );
    REQUIRE( obj.IsAC() == true );
    REQUIRE( obj.IsLuxury() == false );
    REQUIRE( obj.IsSitting() == true );
    REQUIRE( obj.GetNumberOfTiers() == 0U );
    REQUIRE( abs(obj.GetLoadFactor()-2.0) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-125.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-225.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 250U );

    // check output streaming operator
    cout<<BookingClasses::ACChairCar::Type()<<endl;
}

TEST_CASE( "Sleeper test case", "[Sleeper]" ) {
    const BookingClasses &obj = BookingClasses::Sleeper::Type();
    const BookingClasses &objCopy = BookingClasses::Sleeper::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "Sleeper" );
    REQUIRE( obj.IsAC() == false );
    REQUIRE( obj.IsLuxury() == false );
    REQUIRE( obj.IsSitting() == false );
    REQUIRE( obj.GetNumberOfTiers() == 3U );
    REQUIRE( abs(obj.GetLoadFactor()-1.0) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.3) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-100.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-200.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() == 500U );

    // check output streaming operator
    cout<<BookingClasses::Sleeper::Type()<<endl;
}

TEST_CASE( "SecondSitting test case", "[SecondSitting]" ) {
    const BookingClasses &obj = BookingClasses::SecondSitting::Type();
    const BookingClasses &objCopy = BookingClasses::SecondSitting::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );
    
    // check all methods
    REQUIRE( obj.GetName() == "Second Sitting" );
    REQUIRE( obj.IsAC() == false );
    REQUIRE( obj.IsLuxury() == false );
    REQUIRE( obj.IsSitting() == true );
    REQUIRE( obj.GetNumberOfTiers() == 0U );
    REQUIRE( abs(obj.GetLoadFactor()-0.6) <= 1e-6 );
    REQUIRE( abs(obj.GetTatkalLoadFactor()-0.1) <= 1e-6 );
    REQUIRE( abs(obj.GetMinimumTatkalCharge()-10.0) <= 1e-6 );
    REQUIRE( abs(obj.GetMaximumTatkalCharge()-15.0) <= 1e-6 );
    REQUIRE( obj.GetMinimumTatkalDistance() != 100U );

    // check output streaming operator
    cout<<BookingClasses::SecondSitting::Type()<<endl;
}
