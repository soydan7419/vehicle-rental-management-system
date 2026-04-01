#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person {
private:
    string driverLicenseNumber;
    int loyaltyPoints;

public:
    Customer();
    Customer(int id, string name, string phone, string driverLicenseNumber, int loyaltyPoints);
    ~Customer();

    string getDriverLicenseNumber() const;
    int getLoyaltyPoints() const;

    void setDriverLicenseNumber(string driverLicenseNumber);
    void setLoyaltyPoints(int loyaltyPoints);

    void display() const override;
};

#endif