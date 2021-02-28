#ifndef RAILWAYS_HPP
#define RAILWAYS_HPP

#include <iostream>
#include <vector>
#include <unordered_map>

#include "Station.hpp"

using namespace std;

class Railways{

    private:
        Railways();
        ~Railways();

        static vector<Station> sStations;
        static unordered_map<string, unordered_map<string, uint32_t> > sDistStations;

        void AddStation(const Station &);
        void AddRoute(const Station &, const Station &, uint32_t distance);

    public:
        static const Railways &IndianRailways();
        uint32_t GetDistance(const Station &, const Station &) const;
        friend ostream &operator<<(ostream &, const Railways &);
};

#endif