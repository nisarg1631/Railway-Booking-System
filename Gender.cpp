// Nisarg Upadhyaya
// 19CS30031

#include "Gender.h"

// Names defined as static constants
template <> const string Gender::Male::sName = "Male";
template <> const string Gender::Female::sName = "Female";

// Salutations defined as static constants
template <> const string Gender::Male::sSalutation = "Mr.";
template <> const string Gender::Female::sSalutation = "Ms.";
