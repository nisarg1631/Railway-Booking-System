// Nisarg Upadhyaya
// 19CS30031

#include "Railways.h"
#include "Station.h"
#include "Exceptions.h"

void Railways::UnitTestRailways(){
    const Railways &railways = Railways::IndianRailways();
    const Railways &railwaysCopy = Railways::IndianRailways();

    // check for singleton property
    if(&railways != &railwaysCopy)
        cout<<"IndianRailways is not singleton for Railways."<<endl;
    
    const Station &delhi = railways.GetStation("Delhi");
    const Station &bangalore = railways.GetStation("Bangalore");
    const Station &kolkata = railways.GetStation("Kolkata");
    const Station &chennai = railways.GetStation("Chennai");
    try{
        const Station &ahmedabad = railways.GetStation("Ahmedabad");
    }
    catch(const Invalid_Station_Input &e){
        cout<<e.what()<<endl;
    }

    // check for symmetricity in GetDistance
    if(railways.GetDistance(delhi, bangalore) != railways.GetDistance(delhi, bangalore))
        cout<<"GetDistance() doesn't return symmetric value for pair of stations in Railways."<<endl;
    
    // check a few distances
    if(railways.GetDistance(delhi, bangalore) != 2150U || railways.GetDistance(delhi, kolkata) != 1472U ||
        railways.GetDistance(delhi, chennai) != 2180U)
        cout<<"GetDistance() doesn't return correct value in Railways."<<endl;
    
    // check output streaming operator
    cout<<Railways::IndianRailways()<<endl;
}

int main(){
    Railways::UnitTestRailways();
    return 0;
}