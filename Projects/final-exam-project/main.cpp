/* 
    File: main.cpp
    Description: using classes and objects to display multiple mountains' names, country, and elevation (in ft and meters) and the mountain 
    with the lowest elevation
   Author: Jazmin Avila Lambaren
    Email: jazmina0397@student.vvc.edu
    Date: 06-09-23
*/

#include "Mountain.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::setfill;
using std::setw;
using std::right;
using std::left;
using std::endl;

Mountain* minElevation(vector<Mountain*> mountains) { //finding the smallest mountain
    int min = 0;
    for (unsigned int i = 0; i < mountains.size(); i++) {
        if (mountains[i]->getElevationFT() < mountains[min]->getElevationFT()) {
            min = i;
        }
    }
    return mountains.at(min);
}

int main () {

    vector<Mountain*> mountains;

    //adding objects to vector
    mountains.push_back(new Mountain("Chimborazo", "Ecuador ", 20549));
    mountains.push_back(new Mountain("Matterhorn", "Switzerland", 14692));
    mountains.push_back(new Mountain("Olympus", "Greece", 9573));
    mountains.push_back(new Mountain("Everest", "Nepal", 29029));
    mountains.push_back(new Mountain("Mount Marcy", "United States", 5344));
    mountains.push_back(new Mountain("Mount Michell", "United States", 6684));
    mountains.push_back(new Mountain("Zugspitze", "Switzerland", 9719));

    Mountain* lowest = minElevation(mountains); //finding smallest mountain

    cout << left << setw(16) << "Mountain" << setw(16) << "Country" << "Elevation(ft)";
    cout << right << setw(16) << "Elevation(m)" << endl;

    //displaying information of the mountains
    for (unsigned int i = 0; i < mountains.size(); i++) {
        cout << left << setw(16) << mountains[i]->getMountainName() <<setw(15) <<  mountains[i]->getCountryName();
        cout << right << setw(10) << mountains[i]->getElevationFT();
        cout << right << setw(20) << mountains[i]->toMeters(mountains[i]->getElevationFT()) << endl;
    }

    cout << endl;

    //displaing information of the smallest mountain
    cout << "Mountain with lowest elevation:" << std::endl;
    cout << left << setw(16) << "Mountain" << "Country" << right << setw(22) << "Elevation(ft)";
    cout << right << setw(16) << "Elevation(m)" << endl;

    cout << left << setw(16) << lowest->getMountainName() << lowest->getCountryName() << setfill(' ');
    cout << right << setw(7) << lowest->getElevationFT();
    cout << right << setw(20) << lowest->toMeters(lowest->getElevationFT()) << endl;





    return 0;
}