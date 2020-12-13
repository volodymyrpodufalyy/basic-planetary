#include "Planet_review.h"
#include <bits/stdc++.h>

class Planetary {

public:

    Planetary();
    Planetary(int value);
    ~Planetary();

    void findDistanceBetween(Planet planetA, Planet planetB);
    void findAverageMass();
    void SortingPlanets();
    Planet getPlanetIndex(int Index);
    void addPlanetToArray(Planet planet,unsigned int Index);
private:
    Planet* ArrayofPlanets;
    int Length;
};
