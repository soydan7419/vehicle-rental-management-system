#ifndef LUXURYFEATURE_H
#define LUXURYFEATURE_H

#include "Vehicle.h"

class LuxuryFeature : virtual public Vehicle {
protected:
    bool premiumSoundSystem;
    bool leatherSeats;

public:
    LuxuryFeature();
    LuxuryFeature(bool premiumSoundSystem, bool leatherSeats);
    virtual ~LuxuryFeature();

    bool hasPremiumSoundSystem() const;
    bool hasLeatherSeats() const;

    void setPremiumSoundSystem(bool premiumSoundSystem);
    void setLeatherSeats(bool leatherSeats);

    void displayLuxuryInfo() const;
};

#endif