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

        // constructor made private to ensure it is not called directly with erroneous inputs
        Name(string, string, string);

        // blocked copy assignment operator
        Name &operator=(const Name &);

    public:
        Name(const Name &);
        ~Name();

        // creates a new name object if valid name is provided
        static Name CreateName(const string &, const string &, const string &);

        string ToString() const;

        // output streaming operator
        friend ostream &operator<<(ostream &, const Name &);

        static void UnitTestName();
};

#endif
