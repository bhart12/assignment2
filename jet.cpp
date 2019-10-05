//
// Created by Bryce Hart on 10/4/19.
//

#include "jet.h"

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, string engineSize, int numOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
    numberOfEngines = numOfEngines;
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
    return myEngineSize;
}

int Jet::getNumOfEngines() {
    return numberOfEngines;
}

void Jet::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Jet::mileageEstimate(double mileTime) {
	srand(time(0));
	
    double mileage = ((rand() % 60) + 40) * mileTime;
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize() + 
		"\n\tNumber of Engines: " +
		to_string(getNumOfEngines());
}
