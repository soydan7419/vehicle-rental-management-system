#include "Motorcycle.h"

Motorcycle::Motorcycle() : Vehicle(), engineCapacity(0), helmetIncluded(false) {
}

Motorcycle::Motorcycle(int id, string brand, string model, int year, double dailyRate, bool available, int engineCapacity, bool helmetIncluded)
    : Vehicle(id, brand, model, year, dailyRate, available),
      engineCapacity(engineCapacity), helmetIncluded(helmetIncluded) {
}

Motorcycle::~Motorcycle() {
}

int Motorcycle::getEngineCapacity() const {
    return engineCapacity;
}

bool Motorcycle::hasHelmetIncluded() const {
    return helmetIncluded;
}

void Motorcycle::setEngineCapacity(int engineCapacity) {
    this->engineCapacity = engineCapacity;
}

void Motorcycle::setHelmetIncluded(bool helmetIncluded) {
    this->helmetIncluded = helmetIncluded;
}

double Motorcycle::calculateRentalCost(int days) const {
    return dailyRate * days + 10;
}

void Motorcycle::display() const {
    Vehicle::display();
    cout << "Engine capacity: " << engineCapacity << " cc" << endl;
    cout << "Helmet included: " << (helmetIncluded ? "Yes" : "No") << endl;
}