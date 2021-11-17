// Nisarg Upadhyaya
// 19CS30031

#ifndef _EXCEPTIONS_H
#define _EXCEPTIONS_H

#include <exception>
using namespace std;

// booking exceptions

class Bad_Booking : public exception{
    public:  
        const char *what() const throw(){  
            return "Invalid booking.\n";  
        } 
};

class Invalid_Station_Input : public Bad_Booking{
    public:  
        const char *what() const throw(){  
            return "Invalid station input in booking.\n";  
        }
};

class Same_Stations : public Invalid_Station_Input{
    public:  
        const char *what() const throw(){  
            return "Origin and destination stations cannot be same.\n";  
        }
};

class Station_Not_Found : public Invalid_Station_Input{
    public:  
        const char *what() const throw(){  
            return "Provided station doesn't exist in database.\n";  
        }
};

class Invalid_Date_Input : public Bad_Booking{
    public:  
        const char *what() const throw(){  
            return "Invalid date input in booking.\n";  
        }
};

class Invalid_Birth_Date : public Invalid_Date_Input{
    public:  
        const char *what() const throw(){  
            return "Date of birth must precede date of reservation.\n";  
        }
};

class Invalid_Booking_Date : public Invalid_Date_Input{
    public:  
        const char *what() const throw(){  
            return "Booking date can't precede date of reservation and should be within one year from it.\n";  
        }
};

class Invalid_Tatkal_Date : public Invalid_Date_Input{
    public:  
        const char *what() const throw(){  
            return "Tatkal booking can be availed only one day before travel.\n";  
        }
};

class Ineligible_Passenger : public Bad_Booking{
    public:  
        const char *what() const throw(){  
            return "Passenger is not eligible for travel.\n";  
        }
};

class Divyaang_Ineligible : public Ineligible_Passenger{
    public:  
        const char *what() const throw(){  
            return "Passenger is not eligible for travel in divyaang category.\n";  
        }
};

class Senior_Citizen_Ineligible : public Ineligible_Passenger{
    public:  
        const char *what() const throw(){  
            return "Passenger is not eligible for travel in senior citizen category.\n";  
        }
};

class Ladies_Ineligible : public Ineligible_Passenger{
    public:  
        const char *what() const throw(){  
            return "Passenger is not eligible for travel in ladies category.\n";  
        }
};

// date exceptions

class Bad_Date : public exception{
    public:  
        const char *what() const throw(){  
            return "Invalid date.\n";  
        } 
};

class Invalid_Input_Format : public Bad_Date{
    public:  
        const char *what() const throw(){  
            return "Date should be provided in \"dd/mm/yyyy\" format only.\n";  
        }
};

class Year_Out_Of_Bound : public Bad_Date{
    public:  
        const char *what() const throw(){  
            return "Year should be between 1900 to 2099.\n";  
        }
};

class Month_Out_Of_Bound : public Bad_Date{
    public:  
        const char *what() const throw(){  
            return "Month should be between 1 to 12.\n";  
        }
};

class Date_Out_Of_Bound : public Bad_Date{
    public:  
        const char *what() const throw(){  
            return "Date should be between 1 to 31.\n";  
        }
};

class Date_Doesnt_Exist : public Bad_Date{
    public:  
        const char *what() const throw(){  
            return "No such date exists in calendar.\n";  
        }
};

// passenger exceptions

class Bad_Passenger : public exception{
    public:  
        const char *what() const throw(){  
            return "Invalid passenger.\n";  
        } 
};

class Invalid_Name : public Bad_Passenger{
    public:  
        const char *what() const throw(){  
            return "First and last name can't both be empty.\n";  
        }
};

class Invalid_Date_Of_Birth : public Bad_Passenger{
    public:  
        const char *what() const throw(){  
            return "Invalid date of birth provided for passenger.\n";  
        }
};

class Invalid_Aadhar : public Bad_Passenger{
    public:  
        const char *what() const throw(){  
            return "Invalid aadhar number provided for passenger.\n";  
        }
};

class Invalid_Mobile : public Bad_Passenger{
    public:  
        const char *what() const throw(){  
            return "Invalid mobile number provided for passenger.\n";  
        }
};

class Invalid_Disability_ID : public Bad_Passenger{
    public:  
        const char *what() const throw(){  
            return "Invalid disability ID provided for passenger.\n";  
        }
};

#endif
