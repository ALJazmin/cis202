#ifndef MOUNTAIN_H
#define MOUNTAIN_H

#include <iostream>
#include <string>

using std::string;


class Mountain {
    public:
    Mountain();
    Mountain(string dataName, string dataCountry, int dataElevationFT);
    void setMountainName(string name);
    void setCountryName(string country);
    void setElevationFT(int elevationFT);
    string getMountainName ();
    string getCountryName();
    int getElevationFT();
    double toMeters(double elevationFT);


    private: 
    string name;
    string country;
    int elevationFT;
};




#endif
