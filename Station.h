// Nisarg Upadhyaya
// 19CS30031

#ifndef _STATION_H
#define _STATION_H

#include <iostream>
#include <string>

using namespace std;

class Station{

    private:
        const string name_;

        Station &operator=(const Station &);

    public:
        Station(string);
        Station(const Station &);
        ~Station();

        inline string GetName() const{
            return name_;
        }
        uint32_t GetDistance(const Station &) const;

        friend ostream &operator<<(ostream &, const Station &);

        static void UnitTestStation();
};

#endif