#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>

using namespace std;

class Reservation {
private:
    int reservationId;
    int customerId;
    int vehicleId;
    int numberOfDays;
    string status;

public:
    Reservation();
    Reservation(int reservationId, int customerId, int vehicleId, int numberOfDays, string status);
    Reservation(const Reservation& other);
    Reservation& operator=(const Reservation& other);
    ~Reservation();

    int getReservationId() const;
    int getCustomerId() const;
    int getVehicleId() const;
    int getNumberOfDays() const;
    string getStatus() const;

    void setCustomerId(int customerId);
    void setVehicleId(int vehicleId);
    void setNumberOfDays(int numberOfDays);
    void setStatus(string status);

    void display() const;

    friend ostream& operator<<(ostream& out, const Reservation& r);
};

#endif