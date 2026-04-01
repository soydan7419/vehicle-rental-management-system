#include "Reservation.h"

Reservation::Reservation()
    : reservationId(0), customerId(0), vehicleId(0), numberOfDays(0), status("Pending") {
}

Reservation::Reservation(int reservationId, int customerId, int vehicleId, int numberOfDays, string status)
    : reservationId(reservationId), customerId(customerId), vehicleId(vehicleId), numberOfDays(numberOfDays), status(status) {
}

Reservation::Reservation(const Reservation& other)
    : reservationId(other.reservationId),
      customerId(other.customerId),
      vehicleId(other.vehicleId),
      numberOfDays(other.numberOfDays),
      status(other.status) {
}

Reservation& Reservation::operator=(const Reservation& other) {
    if (this != &other) {
        reservationId = other.reservationId;
        customerId = other.customerId;
        vehicleId = other.vehicleId;
        numberOfDays = other.numberOfDays;
        status = other.status;
    }
    return *this;
}

Reservation::~Reservation() {
}

int Reservation::getReservationId() const {
    return reservationId;
}

int Reservation::getCustomerId() const {
    return customerId;
}

int Reservation::getVehicleId() const {
    return vehicleId;
}

int Reservation::getNumberOfDays() const {
    return numberOfDays;
}

string Reservation::getStatus() const {
    return status;
}

void Reservation::setCustomerId(int customerId) {
    this->customerId = customerId;
}

void Reservation::setVehicleId(int vehicleId) {
    this->vehicleId = vehicleId;
}

void Reservation::setNumberOfDays(int numberOfDays) {
    this->numberOfDays = numberOfDays;
}

void Reservation::setStatus(string status) {
    this->status = status;
}

void Reservation::display() const {
    cout << "Reservation ID: " << reservationId << endl;
    cout << "Customer ID: " << customerId << endl;
    cout << "Vehicle ID: " << vehicleId << endl;
    cout << "Number of days: " << numberOfDays << endl;
    cout << "Status: " << status << endl;
}

ostream& operator<<(ostream& out, const Reservation& r) {
    out << "Reservation ID: " << r.reservationId << endl;
    out << "Customer ID: " << r.customerId << endl;
    out << "Vehicle ID: " << r.vehicleId << endl;
    out << "Number of days: " << r.numberOfDays << endl;
    out << "Status: " << r.status << endl;
    return out;
}