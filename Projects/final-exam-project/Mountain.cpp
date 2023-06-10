#include "Mountain.h"
#include <iostream>
#include <string>

using std::string;

Mountain::Mountain() { 
    this->name = "unknown";
    this->country = "unknown";
    this->elevationFT = 0;
}
Mountain::Mountain(string dataName, string dataCountry, int dataElevationFT){
    this->name = dataName;
    this->country = dataCountry;
    this->elevationFT = dataElevationFT;
}
void Mountain::setMountainName(string name){
    this->name = name;
}
void Mountain::setCountryName(string country){
    this->country = country;
}
void Mountain::setElevationFT(int elevationFT){
    this->elevationFT = elevationFT;
}
string Mountain::getMountainName (){
    return name;
};
string Mountain::getCountryName() {
    return country;
};
int Mountain::getElevationFT() {
    return elevationFT;
};
double Mountain::toMeters(double elevationFT){
    double ftToMt = 1/3.2808;

    return elevationFT * ftToMt;
};