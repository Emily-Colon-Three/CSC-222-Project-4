#include "ParkedCar.h"
#include <string>

// The ParkedCar object constructor, parameters for the brand, model, color, license number, and minutes parked pass in to become values of the new object.
ParkedCar::ParkedCar(std::string brand, std::string model, std::string color, int ln, int mp)
{
    this->brand = brand;
    this->model = model;
    this->color = color;

    this->licenseNumber = ln;
    this->minutesParked = mp;
}


