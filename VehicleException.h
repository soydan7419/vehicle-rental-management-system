#ifndef VEHICLEEXCEPTION_H
#define VEHICLEEXCEPTION_H

#include <exception>
#include <string>

class VehicleException : public std::exception {
private:
    std::string message;

public:
    VehicleException(std::string message);
    const char* what() const noexcept override;
};

#endif