// Nisarg Upadhyaya
// 19CS30031

#ifndef _NAME_H
#define _NAME_H

#include <iostream>
#include <string>

using namespace std;

class Name{
    private:
        string firstName_, middleName_, lastName_;

        // constructor and destructor made private to ensure they are not called directly with erroneous inputs
        Name(string, string, string);
        ~Name();

        // blocked copy assignment operator
        Name &operator=(const Name &);

    public:
        Name(const Name &);

        // creates a new name object if valid name is provided
        static Name CreateName(const string &, const string &, const string &);

        string ToString() const;

        // output streaming operator
        friend ostream &operator<<(ostream &, const Name &);

        static void UnitTestName();
};

#endif
