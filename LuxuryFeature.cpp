#include "LuxuryFeature.h"
#include <iostream>

LuxuryFeature::LuxuryFeature() : premiumSoundSystem(false), leatherSeats(false) {
}

LuxuryFeature::LuxuryFeature(bool premiumSoundSystem, bool leatherSeats)
    : premiumSoundSystem(premiumSoundSystem), leatherSeats(leatherSeats) {
}

LuxuryFeature::~LuxuryFeature() {
}

bool LuxuryFeature::hasPremiumSoundSystem() const {
    return premiumSoundSystem;
}

bool LuxuryFeature::hasLeatherSeats() const {
    return leatherSeats;
}

void LuxuryFeature::setPremiumSoundSystem(bool premiumSoundSystem) {
    this->premiumSoundSystem = premiumSoundSystem;
}

void LuxuryFeature::setLeatherSeats(bool leatherSeats) {
    this->leatherSeats = leatherSeats;
}

void LuxuryFeature::displayLuxuryInfo() const {
    std::cout << "Premium sound system: " << (premiumSoundSystem ? "Yes" : "No") << std::endl;
    std::cout << "Leather seats: " << (leatherSeats ? "Yes" : "No") << std::endl;
}