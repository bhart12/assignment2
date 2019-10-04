//
// Created by Bryce Hart on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <time.h> 

class Jet : public PoweredVehicle {

private:
    string myEngineSize;
	int numberOfEngines = 1;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 string engineSize);

    virtual ~Jet();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_CAR_H
