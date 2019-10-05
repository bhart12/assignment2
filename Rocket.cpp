//
// Created by Bryce Hart on 10/4/19.
//

#include "Rocket.h"

Rocket::Rocket() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Rocket::Rocket(string brand, string model, string fuelType, string engineSize, int numOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
    numberOfEngines = numOfEngines;
}

Rocket::~Rocket() = default;

string Rocket::getEngineSize() {
    return myEngineSize;
}

int Rocket::getNumOfEngines() {
    return numberOfEngines;
}

void Rocket::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Rocket::mileageEstimate(double mileTime) {
	srand(time(0));
	
    double mileage = ((rand() % 1500) + 500) * mileTime;
    if (fuelType == "SuperRocketX" && numberOfEngines > 5) {
        mileage += (mileage * 0.2) + (0.5 * mileTime);
    }
    return mileage;
}

string Rocket::toString() {
    return "-> Rocket\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize() + 
		"\n\tNumber of Engines: " +
		to_string(getNumOfEngines());
}
