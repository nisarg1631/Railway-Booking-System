// Nisarg Upadhyaya
// 19CS30031

#include "Passenger.h"
#include "Exceptions.h"

void Passenger::UnitTestPassenger(){
    // validity of name checked in UnitTestName

    // invalid aadhar number (12 digits+letters)
    try{
        CreatePassenger(
            Name::CreateName("Nisarg", "", "Upadhyaya"), 
            "1234abcd5678",
            "",
            "16/03/2001",
            Gender::Male::Type()
            );
    }
    catch(const Bad_Passenger& e){
        std::cerr << e.what() << '\n';
    }
    // invalid aadhar number (all digits but length not 12)
    try{
        CreatePassenger(
            Name::CreateName("Nisarg", "", "Upadhyaya"), 
            "1234567890",
            "",
            "16/03/2001",
            Gender::Male::Type()
            );
    }
    catch(const Bad_Passenger& e){
        std::cerr << e.what() << '\n';
    }
    // invalid mobile number if provided (10 digits+letters)
    try{
        CreatePassenger(
            Name::CreateName("Nisarg", "", "Upadhyaya"), 
            "123456781234",
            "1234ab5678",
            "16/03/2001",
            Gender::Male::Type()
            );
    }
    catch(const Bad_Passenger& e){
        std::cerr << e.what() << '\n';
    }
    // invalid mobile number if provided (all digits but length not 10)
    try{
        CreatePassenger(
            Name::CreateName("Nisarg", "", "Upadhyaya"), 
            "123456781234",
            "12345678",
            "16/03/2001",
            Gender::Male::Type()
            );
    }
    catch(const Bad_Passenger& e){
        std::cerr << e.what() << '\n';
    }
    // invalid divyaang if provided (non-digits)
    try{
        CreatePassenger(
            Name::CreateName("Nisarg", "", "Upadhyaya"), 
            "123456781234",
            "9876543210",
            "16/03/2001",
            Gender::Male::Type(),
            Divyaang::None::Type(),
            "abcdefgh");
    }
    catch(const Bad_Passenger& e){
        std::cerr << e.what() << '\n';
    }
    // all correct, check methods and output streaming operator
    try{
        Passenger p(CreatePassenger(
            Name::CreateName("Nisarg", "", "Upadhyaya"), 
            "123456781234",
            "9876543210",
            "16/03/2001",
            Gender::Male::Type(),
            Divyaang::None::Type(),
            "1234"));
        
        if(p.GetName().ToString() != "Nisarg Upadhyaya")
            cout<<"Error in GetName. Line: "<<__LINE__<<endl;
        if(p.GetAadharNum() != "123456781234")
            cout<<"Error in GetAadharNum. Line: "<<__LINE__<<endl;
        if(p.GetMobileNum() != "9876543210")
            cout<<"Error in GetMobileNum. Line: "<<__LINE__<<endl;
        if(p.GetDateOfBirth().ToString() != "16/Mar/2001")
            cout<<"Error in GetDateOfBirth. Line: "<<__LINE__<<endl;
        if(&p.GetGender() != &Gender::Male::Type())
            cout<<"Error in GetGender. Line: "<<__LINE__<<endl;
        if(&p.GetDisabilityType() != &Divyaang::None::Type())
            cout<<"Error in GetDisabilityType. Line: "<<__LINE__<<endl;
        if(p.GetDisabilityID() != "1234")
            cout<<"Error in GetDisabilityID. Line: "<<__LINE__<<endl;
        cout<<p<<endl;
    }
    catch(const Bad_Passenger& e){
        std::cerr << e.what() << '\n';
    }
}

int main(){
    Passenger::UnitTestPassenger();
    return 0;
}
