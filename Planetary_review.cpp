#include <iostream>
#include <cmath>
#include "Planetary_review.h"
#include <algorithm>
#include <fstream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshadow"
Planetary::Planetary() {}
Planetary::Planetary(int len) {
    Length = len;
    ArrayofPlanets = new Planet[Length];
}
Planetary::~Planetary() {
    delete [] ArrayofPlanets;
}

Planet Planetary::getPlanetIndex(int index){
    return ArrayofPlanets[index];
}
void Planetary::addPlanetToArray(Planet planet,unsigned int index){
    if(index <= Length){
        ArrayofPlanets[index] = planet;
    }
}
void Planetary::findDistanceBetween(Planet planetA, Planet planetB){
    double dis = planetA.GetDistance_from_sun() - planetB.GetDistance_from_sun();
    cout << fabs(dis) << endl << endl;
}
void Planetary::findAverageMass(){
    double sum = 0;
    for(int i = 0;i < Length;i++){
        sum += ArrayofPlanets[i].GetMass_in_kg();
    }
    cout <<(sum/Length)<<endl<<endl;
}
void Planetary::SortingPlanets(){
    cout << "lenghth of day on planets: "<<endl;
    for (int i = 0; i < Length; i++){
        cout << " " << ArrayofPlanets[i].GetLength_of_day() << "h: " << ArrayofPlanets[i].GetName();
    }
    cout << endl;
    fstream file;
    file.open("C://test.txt", fstream::in | fstream::out);

    for(int i=0; i< Length; i++)
        file <<  ArrayofPlanets[i].GetLength_of_day() << " ";
    file << " " <<endl;
    for(int i=0; i< Length; i++)
    file <<  ArrayofPlanets[i].GetName() << " ";
    file.close();
    int n = Length;
    int arr[n];
    ifstream fin ;
    fin.open ("C://test.txt");
    if (!fin.is_open()) {
        cout <<"error"<<endl;
    }
    else{
        cout <<"Sorted length"<<endl;
        for(int i=0; i< n; i++) {
            fin >> arr[i];
        }
        cout << "Saturn, Mercury, Neptune, Mars, Jupiter, Venus, Earth, Uranus" <<endl;
            sort(arr, arr + n);
            for (size_t i = 0; i != n; ++i)
                cout << " " << arr[i] << "h ";

    }
    fin.close();
    cout << endl;
}

