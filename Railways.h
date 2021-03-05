#ifndef _RAILWAYS_H
#define _RAILWAYS_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Station;

class Railways{

    private:
        Railways();
        ~Railways();

        Railways(const Railways &);
        Railways &operator=(const Railways &);

        static const vector<Station> sStations;
        static const unordered_map<string, unordered_map<string, uint32_t> > sDistStations;

        static vector<Station> LoadStations();
        static unordered_map<string, unordered_map<string, uint32_t> > LoadRoutes();

    public:
        static const Railways &IndianRailways();
        uint32_t GetDistance(const Station &, const Station &) const;
        friend ostream &operator<<(ostream &, const Railways &);
};

#endif