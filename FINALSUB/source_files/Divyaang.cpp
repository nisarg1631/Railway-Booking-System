// Nisarg Upadhyaya
// 19CS30031

#include "Divyaang.h"

const double Divyaang::NoneConcessionFactor = 0.0;

template<> const string Divyaang::Blind::sName = "Blind";
template<> const string Divyaang::OrthopaedicallyHandicaped::sName = "Orthopaedically Handicaped";
template<> const string Divyaang::CancerPatient::sName = "Cancer Patient";
template<> const string Divyaang::TBPatient::sName = "TB Patient";
template<> const string Divyaang::None::sName = "None";

// class Divyaang

Divyaang::Divyaang(const string &name) : name_(name) {
    //checking constructor
    #ifdef _DEBUG
    cout<<"Divyaang "<<*this<<" created."<<endl;
    #endif
}
Divyaang::~Divyaang() {
    //checking destructor
    #ifdef _DEBUG
    cout<<"Divyaang "<<*this<<" destructed."<<endl;
    #endif
}

ostream &operator<<(ostream &os, const Divyaang &divyaang){
    os<<divyaang.GetName();
    return os;
}
