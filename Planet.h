#include <string>
using namespace std;
enum type {TERRESTRIAL, JOVIAN};
class Planet {
private:
    string Planet_type;
    type Ptype;
    string name;
    double mass_in_kg;
    double orbital_velocity;
    double mean_temperature;
    int length_of_day;
    double distance_from_sun;

public:
    Planet();
    Planet(string name,double massInKg, double orbitalVelocity, double meanTemperature, int lengthOfDay,double distanceFromSun,type Ptype);
    ~Planet();
    void SetName(string name);
    string GetName();
    void SetMass_in_kg (double mass_in_kg);
    double GetMass_in_kg ();
    void SetOrbital_velocity (double orbital_velocity);
    double GetOrbital_velocity ();
    void SetMean_temperature (double mean_temperature);
    double GetMean_temperature ();
    void SetLength_of_day (int length_of_day);
    int GetLength_of_day ();
    void SetDistance_from_sun (double distance_from_sun);
    double GetDistance_from_sun ();

    void print();

};