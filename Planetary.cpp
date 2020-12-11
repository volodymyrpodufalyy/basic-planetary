#include <iostream>
#include <cmath>
#include "Planetary.h"
#include <algorithm>
#include <fstream>
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshadow"
Planetary::Planetary() {}
Planetary::Planetary(int Len) {
    Length = Len;
    ArrayofPlanets = new Planet[Length];
}
Planetary::~Planetary() {
    delete [] ArrayofPlanets;
}

Planet Planetary::getPlanetIndex(int Index){
    return ArrayofPlanets[Index];
}
void Planetary::addPlanetToArray(Planet planet,unsigned int Index){
    if(Index <= Length){
        ArrayofPlanets[Index]=planet;
    }

}
void Planetary::findDistanceBetween(Planet planetA,Planet planetB){
    double dis = planetA.GetDistance_from_sun() - planetB.GetDistance_from_sun();
    cout<< fabs(dis) << endl << endl;
}
void Planetary::findAverageMass(){
    double sum = 0;
    for(int i = 0;i < Length;i++){
        sum += ArrayofPlanets[i].GetMass_in_kg();
    }
    cout<<(sum/Length)<<endl<<endl;
}
void Planetary::SortingPlanets(){
    cout << "Lenghth of day on planets: "<<endl;
    for (int i = 0; i < Length; i++){
        cout << " " << ArrayofPlanets[i].GetLength_of_day() << "h: " << ArrayofPlanets[i].GetName();
    }
    cout << endl;
    fstream f;
    f.open("C://test.txt", fstream::in | fstream::out);

    for(int i=0; i< Length; i++)
        f <<  ArrayofPlanets[i].GetLength_of_day() << " ";
    f << " " <<endl;
    for(int i=0; i< Length; i++)
    f <<  ArrayofPlanets[i].GetName() << " ";
    f.close();
    int n = Length;
    int arr[n];
    ifstream fin ;
    fin.open ("C://test.txt");
    if(!fin.is_open()){
        cout<<"error"<<endl;
    }
    else{
        cout<<"Sorted length"<<endl;
        for(int i=0; i< n; i++) {
            fin >> arr[i];
        }
        cout << "Saturn, Mercury, Neptune, Mars, Jupiter, Venus, Earth, Uranus" <<endl;
            sort(arr, arr + n);
            for (size_t i = 0; i != n; ++i)
                cout << " "<< arr[i] << "h ";
            //for (int j = 0; j < k; j++){
           //   cout << array[j] << " ";
            //}

    }
    fin.close();
    cout << endl;
}

