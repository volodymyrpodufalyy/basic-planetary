#include <iostream>
#include "Planetary_review.h"
using namespace std;

int main() {
    Planetary planetary(8);

    planetary.addPlanetToArray(Planet("Saturn",12200,12,300,7,12000,JOVIAN),0);
    planetary.addPlanetToArray(Planet("Mars",1000,12,300,18,2000,TERRESTRIAL),1);
    planetary.addPlanetToArray(Planet("Earth",2000,12,300,72,11000,TERRESTRIAL),2);
    planetary.addPlanetToArray(Planet("Jupiter",3213,12,300,22,17000,TERRESTRIAL),3);
    planetary.addPlanetToArray(Planet("Venus",43434,12,300,62,12000,JOVIAN),4);
    planetary.addPlanetToArray(Planet("Neptune",6000,12,300,14,16000,JOVIAN),5);
    planetary.addPlanetToArray(Planet("Mercury",7200,12,300,9,10000,JOVIAN),6);
    planetary.addPlanetToArray(Planet("Uranus",15600,12,300,98,15000,TERRESTRIAL),7);
    cout <<"Distance between planets is ";
    planetary.findDistanceBetween(planetary.getPlanetIndex(0),planetary.getPlanetIndex(1));
    cout <<"Average mass of planets is ";
    planetary.findAverageMass();
    planetary.SortingPlanets();
    planetary.getPlanetIndex(0).print();
    return 0;
}
