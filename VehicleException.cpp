#include "VehicleException.h"

VehicleException::VehicleException(std::string message) : message(message) {
}

const char* VehicleException::what() const noexcept {
    return message.c_str();
}