#include <iostream>
#include "Planet_review.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wshadow"
Planet::Planet() {}
Planet::Planet(string name, double massInKg, double orbitalVelocity, double meanTemperature, int lengthOfDay, double distanceFromSun, type Ptype) :
name (name), mass_in_kg (massInKg), orbital_velocity (orbitalVelocity), mean_temperature (meanTemperature), length_of_day (lengthOfDay), distance_from_sun (distanceFromSun), Ptype (Ptype) {}
Planet::~Planet() {}

void Planet::SetName (string name){
    this->name = name;
}
string Planet::GetName (){
    return name;
}
void Planet::SetMass_in_kg (double mass_in_kg){
    this->mass_in_kg = mass_in_kg;
}
double Planet::GetMass_in_kg (){
    return mass_in_kg;
}
void Planet::SetOrbital_velocity (double orbital_velocity){
    this->orbital_velocity = orbital_velocity;
}
double Planet::GetOrbital_velocity (){
    return orbital_velocity;
}
void Planet::SetMean_temperature (double mean_temperature){
    this->mean_temperature = mean_temperature;
}
double Planet::GetMean_temperature (){
    return mean_temperature;
}
void Planet::SetLength_of_day (int length_of_day){
    this->length_of_day = length_of_day;
}
int Planet::GetLength_of_day (){
    return length_of_day;
}
void Planet::SetDistance_from_sun (double distance_from_sun){
    this->distance_from_sun = distance_from_sun;
}
double Planet::GetDistance_from_sun (){
    return distance_from_sun;
}

void Planet::print(){
    std::cout <<"Name "<< name <<std::endl;
    std::cout <<"Mass "<< mass_in_kg <<std::endl;
    std::cout <<"Temp "<< mean_temperature <<std::endl;
    std::cout <<"length of day "<< length_of_day <<std::endl;
    std::cout <<"distance from sun "<< distance_from_sun <<std::endl;
    std::cout <<"planet type "<< Ptype <<std::endl;
}


