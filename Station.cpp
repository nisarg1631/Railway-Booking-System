// Nisarg Upadhyaya
// 19CS30031

#include "Station.h"
#include "Railways.h"

Station::Station(string name) : name_(name) {}
Station::Station(const Station &station) : name_(station.name_) {}
Station::~Station() {}

// Station::GetDistance calls the Railways::IndianRailways().GetDistance with self and the other station as parameters
uint32_t Station::GetDistance(const Station &station) const{
    return Railways::IndianRailways().GetDistance(*this, station);
}

ostream &operator<<(ostream &os, const Station &obj){
    os<<"Station: "<<obj.name_;
    return os;
}
