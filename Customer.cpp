#include "Customer.h"

Customer::Customer() : Person(), driverLicenseNumber("Unknown"), loyaltyPoints(0) {
}

Customer::Customer(int id, string name, string phone, string driverLicenseNumber, int loyaltyPoints)
    : Person(id, name, phone), driverLicenseNumber(driverLicenseNumber), loyaltyPoints(loyaltyPoints) {
}

Customer::~Customer() {
}

string Customer::getDriverLicenseNumber() const {
    return driverLicenseNumber;
}

int Customer::getLoyaltyPoints() const {
    return loyaltyPoints;
}

void Customer::setDriverLicenseNumber(string driverLicenseNumber) {
    this->driverLicenseNumber = driverLicenseNumber;
}

void Customer::setLoyaltyPoints(int loyaltyPoints) {
    this->loyaltyPoints = loyaltyPoints;
}

void Customer::display() const {
    Person::display();
    cout << "Driver license number: " << driverLicenseNumber << endl;
    cout << "Loyalty points: " << loyaltyPoints << endl;
}