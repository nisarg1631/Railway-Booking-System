// Nisarg Upadhyaya
// 19CS30031

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

        // static containers to store the master data of the Indian Railways
        static const vector<Station> sStations;
        static const unordered_map<string, unordered_map<string, uint32_t> > sDistStations;

        // utility functions to initialise sStations and sDistStations
        static vector<Station> LoadStations();
        static unordered_map<string, unordered_map<string, uint32_t> > LoadRoutes();

    public:
        static const Railways &IndianRailways(); // Singleton Railways called IndianRailways
        uint32_t GetDistance(const Station &, const Station &) const;

        friend ostream &operator<<(ostream &, const Railways &);

        static void UnitTestRailways();
};

#endif