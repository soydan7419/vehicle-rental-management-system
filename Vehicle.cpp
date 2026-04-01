#include "Vehicle.h"

int Vehicle::totalVehicles = 0;

Vehicle::Vehicle() : id(0), brand("Unknown"), model("Unknown"), year(0), dailyRate(0.0), available(true) {
    totalVehicles++;
}

Vehicle::Vehicle(int id, string brand, string model, int year, double dailyRate, bool available)
    : id(id), brand(brand), model(model), year(year), dailyRate(dailyRate), available(available) {
    totalVehicles++;
}

Vehicle::Vehicle(const Vehicle& other)
    : id(other.id), brand(other.brand), model(other.model), year(other.year),
      dailyRate(other.dailyRate), available(other.available) {
    totalVehicles++;
}

Vehicle& Vehicle::operator=(const Vehicle& other) {
    if (this != &other) {
        id = other.id;
        brand = other.brand;
        model = other.model;
        year = other.year;
        dailyRate = other.dailyRate;
        available = other.available;
    }
    return *this;
}

Vehicle::~Vehicle() {
    totalVehicles--;
}

int Vehicle::getId() const {
    return id;
}

int Vehicle::getTotalVehicles() {
    return totalVehicles;
}

string Vehicle::getBrand() const {
    return brand;
}

string Vehicle::getModel() const {
    return model;
}

int Vehicle::getYear() const {
    return year;
}

double Vehicle::getDailyRate() const {
    return dailyRate;
}

bool Vehicle::isAvailable() const {
    return available;
}

void Vehicle::setBrand(string brand) {
    this->brand = brand;
}

void Vehicle::setModel(string model) {
    this->model = model;
}

void Vehicle::setYear(int year) {
    this->year = year;
}

void Vehicle::setDailyRate(double dailyRate) {
    this->dailyRate = dailyRate;
}

void Vehicle::setAvailable(bool available) {
    this->available = available;
}

double Vehicle::calculateRentalCost(int days) const {
    return dailyRate * days;
}

void Vehicle::display() const {
    cout << "ID: " << id << endl;
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Daily rate: " << dailyRate << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
}