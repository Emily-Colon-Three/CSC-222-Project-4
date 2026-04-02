/*This is the header file for the PoliceOfficer class. It represents a cop, inspecting a car and parking meter to determine if the law has been broken. If that's the case,
it creates a ParkingTicket object. Additionally, it holds the officer's name and badge number.*/
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include <string>
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"

class PoliceOfficer {
private:
    std::string name;
    int badgeNumber;

    ParkingTicket& issueTicket(int timePaid, int timeUsed, ParkedCar& offender);

public:
    PoliceOfficer(std::string name, int badge);
    void inspectCar(ParkedCar& car, ParkingMeter& meter);
};

#endif // POLICEOFFICER_H
