#pragma once
#include "Vehicle.h"

class Bus : public Vehicle{
private:
    int maxPassengers;
public:
    Bus();
    void displayInfo() override;
};