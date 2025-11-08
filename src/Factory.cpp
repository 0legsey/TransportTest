#include "Factory.h"

Vehicle *Factory::createVehicle(int type)
{
    switch (type)
    {
    case 0:{
        return new Scooter;
    }
    case 1:{
        return new Motorcycle;
    }
    case 2:{
        return new Car;
    }
    case 3:{
        return new Bus;
    }
    default:
        return nullptr;
    }
}