#include "Railways.h"
#include "Station.h"

void Railways::UnitTestRailways(){
    const Railways &railways = Railways::IndianRailways();
    const Railways &railwaysCopy = Railways::IndianRailways();

    // check for singleton property
    if(&railways != &railwaysCopy)
        cout<<"IndianRailways is not singleton for Railways."<<endl;
    
    Station delhi("Delhi");
    Station bangalore("Bangalore");
    Station kolkata("Kolkata");
    Station chennai("Chennai");
    // check for symmetricity in GetDistance
    if(railways.GetDistance(delhi, bangalore) != railways.GetDistance(delhi, bangalore))
        cout<<"GetDistance() doesn't return symmetric value for pair of stations in Railways."<<endl;
    
    // check a few distances
    if(railways.GetDistance(delhi, bangalore) != 2150 || railways.GetDistance(delhi, kolkata) != 1472 ||
        railways.GetDistance(delhi, chennai) != 2180)
        cout<<"GetDistance() doesn't return correct value in Railways."<<endl;
    
    // check output streaming operator
    cout<<Railways::IndianRailways()<<endl;
}

int main(){
    Railways::UnitTestRailways();
    return 0;
}