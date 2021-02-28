#ifndef STATION_HPP
#define STATION_HPP

#include <iostream>
#include <string>

using namespace std;

class Station{

    private:
        const string name_;

    public:
        Station(string);
        ~Station();

        string GetName() const;
        uint32_t GetDistance(const Station &) const;
        friend ostream &operator<<(ostream &, const Station &);
};

#endif