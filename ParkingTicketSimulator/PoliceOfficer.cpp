#include "PoliceOfficer.h"
#include <string>
#include <iostream>

void PoliceOfficer::inspectCar(ParkedCar& car, ParkingMeter& meter)
{
    bool violationSpotted = false;

    if (car.getMinutesParked() > meter.minutesPurchased)
    {
        violationSpotted = true;
        std::cout << "Violation caught!\n";
    }
}
