// Nisarg Upadhyaya
// 19CS30031

#define CATCH_CONFIG_MAIN

#include "Gender.h"
#include "catch.hpp"

template<> const double Gender::Male::sSeniorCitizenConcessionFactor = 0.40;
template<> const double Gender::Female::sSeniorCitizenConcessionFactor = 0.50;

TEST_CASE( "Male gender test case", "[male]" ) {
    const Gender &obj = Gender::Male::Type();
    const Gender &objCopy = Gender::Male::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );

    // check all methods
    REQUIRE( obj.GetName() == "Male" );
    REQUIRE( obj.GetTitle() == "Mr." );
    REQUIRE( abs(obj.GetSeniorCitizenConcessionFactor()-0.4) <= 1e-6 );
    REQUIRE( Gender::IsMale(obj) == true );

    // check output streaming operator
    cout << Gender::Male::Type() << endl;
}

TEST_CASE( "Feale gender test case", "[female]" ) {
    const Gender &obj = Gender::Female::Type();
    const Gender &objCopy = Gender::Female::Type();

    // check for singleton
    REQUIRE( &obj == &objCopy );

    // check all methods
    REQUIRE( obj.GetName() == "Female" );
    REQUIRE( obj.GetTitle() == "Ms." );
    REQUIRE( abs(obj.GetSeniorCitizenConcessionFactor()-0.5) <= 1e-6 );
    REQUIRE( Gender::IsMale(obj) == false );

    // check output streaming operator
    cout << Gender::Female::Type() << endl;
}
