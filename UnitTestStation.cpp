#include "Station.h"

void Station::UnitTestStation(){
    Station mumbai("Mumbai");

    // check name_ attribute and GetName method
    if(mumbai.name_ != "Mumbai")
        cout<<"Incorrect name_ in Station."<<endl;
    if(mumbai.GetName() != "Mumbai")
        cout<<"Incorrect return value by GetName() in Station."<<endl;
    
    // check GetDistance method with other stations
    if(mumbai.GetDistance(Station("Delhi")) != 1447 || mumbai.GetDistance(Station("Bangalore")) != 981 || 
        mumbai.GetDistance(Station("Kolkata")) != 2014 || mumbai.GetDistance(Station("Chennai")) != 1338)
        cout<<"Incorrect return value by GetDistance() in Station."<<endl;
    
    // check the output streaming operator
    cout<<mumbai<<endl;
}

int main(){
    Station::UnitTestStation();
    return 0;
}