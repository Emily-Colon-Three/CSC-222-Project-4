/*This is the header file for the ParkingTicket class. The class records various information about the ParkedCar object, passed to it by the PoliceOfficer object that creates it.
It also gets the PoliceOfficer's name and badge number. It also holds the number of minutes a ParkedCar was parked for and the minutes purchased on the ParkingMeter.
It compares those two values, charging a fee starting at $25 and increasing by $10 with each additional hour parked.*/
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>

class ParkingTicket {
public:
    std::string officerName;
    int officerBadge;

    int minutesBought;
    int minutesParked;

    std::string carBrand;
    std::string carModel;
    std::string carColor;
    int carLicense;

    ParkingTicket(std::string name, int badge, int timeBought, int timeUsed, std::string brand, std::string model, std::string color, int cl);

    void displayTicket();

private:
    int calculateFee();
};

#endif // PARKINGTICKET_H
