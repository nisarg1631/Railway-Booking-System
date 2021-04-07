// Nisarg Upadhyaya
// 19CS30031

#include "Railways.h"
#include "Station.h"

// initialise sStations and sDistStations
const vector<Station> Railways::sStations = Railways::LoadStations();
const unordered_map<string, unordered_map<string, uint32_t> > Railways::sDistStations = Railways::LoadRoutes();

Railways::Railways() {}
Railways::~Railways() {}

vector<Station> Railways::LoadStations(){
    vector<Station> stations;
    stations.push_back(Station("Mumbai"));
    stations.push_back(Station("Delhi"));
    stations.push_back(Station("Bangalore"));
    stations.push_back(Station("Kolkata"));
    stations.push_back(Station("Chennai"));
    return stations;
}

unordered_map<string, unordered_map<string, uint32_t> > Railways::LoadRoutes(){
    unordered_map<string, unordered_map<string, uint32_t> > routes;
    routes["Mumbai"]["Delhi"] = routes["Delhi"]["Mumbai"] = 1447U;
    routes["Mumbai"]["Bangalore"] = routes["Bangalore"]["Mumbai"] = 981U;
    routes["Mumbai"]["Kolkata"] = routes["Kolkata"]["Mumbai"] = 2014U;
    routes["Mumbai"]["Chennai"] = routes["Chennai"]["Mumbai"] = 1338U;
    routes["Bangalore"]["Delhi"] = routes["Delhi"]["Bangalore"] = 2150U;
    routes["Kolkata"]["Delhi"] = routes["Delhi"]["Kolkata"] = 1472U;
    routes["Chennai"]["Delhi"] = routes["Delhi"]["Chennai"] = 2180U;
    routes["Bangalore"]["Kolkata"] = routes["Kolkata"]["Bangalore"] = 1871U;
    routes["Bangalore"]["Chennai"] = routes["Chennai"]["Bangalore"] = 350U;
    routes["Kolkata"]["Chennai"] = routes["Chennai"]["Kolkata"] = 1659U;
    return routes;
}

const Railways &Railways::IndianRailways(){
    static const Railways sIndianRailways;
    return sIndianRailways;
}

// returns distance between station1 and station2 using the master dataset sDistStations
uint32_t Railways::GetDistance(const Station &station1, const Station &station2) const{
    return sDistStations.at(station1.GetName()).at(station2.GetName());
}

ostream &operator<<(ostream &os, const Railways &obj){
    typedef vector<Station>::const_iterator ITER;
    const ITER BEGIN = Railways::sStations.begin(), END = Railways::sStations.end();

    os<<"List of stations:\n";
    for(ITER it = BEGIN; it!=END; it++){
        os<<"\t"<<distance(BEGIN, it)+1<<"> "<<*it<<endl;
    }
    os<<endl<<"Distances:\n";
    for(ITER it1 = BEGIN; it1!=END; it1++){
        for(ITER it2 = it1+1; it2!=END; it2++){
            os<<"\t"<<*it1<<" to "<<*it2<<" = "<<obj.GetDistance(*it1,*it2)<<"KM"<<endl;
        }
    }
    return os;
}