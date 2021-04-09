// Nisarg Upadhyaya
// 19CS30031

#include "Railways.h"
#include "Station.h"
#include "Exceptions.h"

// initialise sStations and sDistStations
vector<const Station *> Railways::sStations;
unordered_map<string, unordered_map<string, uint32_t> > Railways::sDistStations;

Railways::Railways() {
    #ifdef _DEBUG
    cout<<"IndianRailways constructed."<<endl;
    #endif
}
Railways::~Railways() {
    vector<const Station*>::iterator it;
    for (it = sStations.begin(); it != sStations.end(); it++)
        delete *it;
    #ifdef _DEBUG
    cout<<"IndianRailways destructed"<<endl;
    #endif
}

void Railways::LoadStations(){
    sStations.push_back(new Station("Mumbai"));
    sStations.push_back(new Station("Delhi"));
    sStations.push_back(new Station("Bangalore"));
    sStations.push_back(new Station("Kolkata"));
    sStations.push_back(new Station("Chennai"));
}

void Railways::LoadRoutes(){
    sDistStations["Mumbai"]["Delhi"] = sDistStations["Delhi"]["Mumbai"] = 1447U;
    sDistStations["Mumbai"]["Bangalore"] = sDistStations["Bangalore"]["Mumbai"] = 981U;
    sDistStations["Mumbai"]["Kolkata"] = sDistStations["Kolkata"]["Mumbai"] = 2014U;
    sDistStations["Mumbai"]["Chennai"] = sDistStations["Chennai"]["Mumbai"] = 1338U;
    sDistStations["Bangalore"]["Delhi"] = sDistStations["Delhi"]["Bangalore"] = 2150U;
    sDistStations["Kolkata"]["Delhi"] = sDistStations["Delhi"]["Kolkata"] = 1472U;
    sDistStations["Chennai"]["Delhi"] = sDistStations["Delhi"]["Chennai"] = 2180U;
    sDistStations["Bangalore"]["Kolkata"] = sDistStations["Kolkata"]["Bangalore"] = 1871U;
    sDistStations["Bangalore"]["Chennai"] = sDistStations["Chennai"]["Bangalore"] = 350U;
    sDistStations["Kolkata"]["Chennai"] = sDistStations["Chennai"]["Kolkata"] = 1659U;
}

const Railways &Railways::IndianRailways(){
    static const Railways sIndianRailways;
    static bool initialised = false;
    if(!initialised){
        LoadStations();
        LoadRoutes();
        initialised = true;
    }
    return sIndianRailways;
}

// returns distance between station1 and station2 using the master dataset sDistStations
uint32_t Railways::GetDistance(const Station &station1, const Station &station2) const{
    return sDistStations.at(station1.GetName()).at(station2.GetName());
}

const Station& Railways::GetStation(const string &name) const{
    vector<const Station*>::const_iterator it;
    for (it = sStations.begin(); it != sStations.end(); it++)
        if((*it)->GetName() == name)
            return *(*it);
    throw Station_Not_Found();
}

ostream &operator<<(ostream &os, const Railways &obj){
    typedef vector<const Station *>::const_iterator ITER;
    const ITER BEGIN = Railways::sStations.begin(), END = Railways::sStations.end();

    os<<"List of stations:\n";
    for(ITER it = BEGIN; it!=END; it++){
        os<<"\t"<<distance(BEGIN, it)+1<<"> "<<*(*it)<<endl;
    }
    os<<endl<<"Distances:\n";
    for(ITER it1 = BEGIN; it1!=END; it1++){
        for(ITER it2 = it1+1; it2!=END; it2++){
            os<<"\t"<<*(*it1)<<" to "<<*(*it2)<<" = "<<obj.GetDistance(*(*it1),*(*it2))<<"KM"<<endl;
        }
    }
    return os;
}
