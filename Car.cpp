#include "Car.h"
#include <iostream>

Car::Car() : Vehicle(), doors(4), fuelType("Unknown") {
}

Car::Car(int id, string brand, string model, int year, double dailyRate, bool available, int doors, string fuelType)
    : Vehicle(id, brand, model, year, dailyRate, available), doors(doors), fuelType(fuelType) {
}

Car::~Car() {
}

int Car::getDoors() const {
    return doors;
}

string Car::getFuelType() const {
    return fuelType;
}

void Car::setDoors(int doors) {
    this->doors = doors;
}

void Car::setFuelType(string fuelType) {
    this->fuelType = fuelType;
}

double Car::calculateRentalCost(int days) const {
    return getDailyRate() * days + 20;
}

void Car::display() const {
    Vehicle::display();
    cout << "Doors: " << doors << endl;
    cout << "Fuel type: " << fuelType << endl;
}