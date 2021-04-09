// Nisarg Upadhyaya
// 19CS30031

#ifndef _RAILWAYS_H
#define _RAILWAYS_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#include "Exceptions.h"

class Station;

class Railways{

    private:
        Railways();
        ~Railways();

        Railways(const Railways &);
        Railways &operator=(const Railways &);

        // static containers to store the master data of the Indian Railways
        static vector<const Station *> sStations;
        static unordered_map<string, unordered_map<string, uint32_t> > sDistStations;

        // utility functions to initialise sStations and sDistStations
        static void LoadStations();
        static void LoadRoutes();

    public:
        static const Railways &IndianRailways(); // Singleton Railways called IndianRailways
        uint32_t GetDistance(const Station &, const Station &) const;
        const Station &GetStation(const string &) const;

        friend ostream &operator<<(ostream &, const Railways &);

        static void UnitTestRailways();
};

#endif
