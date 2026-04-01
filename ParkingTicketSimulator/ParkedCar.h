/*This is the header file which defines and declares the ParkedCar class and its members. It holds data on a car's license number, model, and color, along with
the number of minutes parked in a space.*/
#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

class ParkedCar {
private:
    int licenseNumber;
    int minutesParked;

public:
    std::string brand;
    std::string model;
    std::string color;

    ParkedCar(std::string brand, std::string model, std::string color, int ln, int mp);

    inline int getLicense()
    {
        return licenseNumber;
    }
    inline int getMinutesParked()
    {
        return minutesParked;
    }
};

#endif // PARKEDCAR_H
