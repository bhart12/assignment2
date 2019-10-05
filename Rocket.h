//
// Created by Bryce Hart on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_ROCKET_H
#define DRIVINGSIMULATOR_ROCKET_H

#include "PoweredVehicle.h"
#include <time.h> 
#include <string>

class Rocket : public PoweredVehicle {

private:
    string myEngineSize;
	int numberOfEngines;

public:
    Rocket();

    explicit Rocket(string brand, string model, string fuelType,
                 string engineSize, int numberOfEngines = 3);

    virtual ~Rocket();
    string getEngineSize();
    int getNumOfEngines();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_ROCKET_H
