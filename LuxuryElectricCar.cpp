#include "LuxuryElectricCar.h"
#include <iostream>

LuxuryElectricCar::LuxuryElectricCar()
    : Vehicle(),
      Car(),
      ElectricFeature(),
      LuxuryFeature(),
      autonomousLevel(0) {
}

LuxuryElectricCar::LuxuryElectricCar(
    int id,
    string brand,
    string model,
    int year,
    double dailyRate,
    bool available,
    int doors,
    string fuelType,
    double batteryCapacity,
    double chargingTime,
    bool premiumSoundSystem,
    bool leatherSeats,
    int autonomousLevel
)
    : Vehicle(id, brand, model, year, dailyRate, available),
      Car(id, brand, model, year, dailyRate, available, doors, fuelType),
      ElectricFeature(batteryCapacity, chargingTime),
      LuxuryFeature(premiumSoundSystem, leatherSeats),
      autonomousLevel(autonomousLevel) {
}

LuxuryElectricCar::~LuxuryElectricCar() {
}

int LuxuryElectricCar::getAutonomousLevel() const {
    return autonomousLevel;
}

void LuxuryElectricCar::setAutonomousLevel(int autonomousLevel) {
    this->autonomousLevel = autonomousLevel;
}

double LuxuryElectricCar::calculateRentalCost(int days) const {
    return getDailyRate() * days + 100;
}

void LuxuryElectricCar::display() const {
    Vehicle::display();
    cout << "Doors: " << doors << endl;
    cout << "Fuel type: " << fuelType << endl;
    displayElectricInfo();
    displayLuxuryInfo();
    cout << "Autonomous level: " << autonomousLevel << endl;
}