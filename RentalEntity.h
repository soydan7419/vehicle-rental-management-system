#ifndef RENTALENTITY_H
#define RENTALENTITY_H

class RentalEntity {
public:
    virtual void display() const = 0;
    virtual int getId() const = 0;
    virtual ~RentalEntity() {}
};

#endif