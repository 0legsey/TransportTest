#pragma once
#include "Scooter.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Bus.h"

class Factory{
public:
    Vehicle* createVehicle(int type);
};