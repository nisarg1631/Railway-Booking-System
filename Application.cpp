// Nisarg Upadhyaya
// 19CS30031

#include "BookingClasses.h"
#include "Booking.h"
#include "Concession.h"

// set the necessary parameters for the application here
const double Booking::sBaseFarePerKM = 0.50;

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

// senior citizen concession factors
template<> const double Gender::Male::sSeniorCitizenConcessionFactor = 0.40;
template<> const double Gender::Female::sSeniorCitizenConcessionFactor = 0.50;

// other concession factors
const double GeneralConcession::sConcessionFactor = 0.00;
const double LadiesConcession::sConcessionFactor = 0.00;
