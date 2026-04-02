#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include <string>
#include <iostream>

PoliceOfficer::PoliceOfficer(std::string name, int badge)
{
    this->name = name;
    this->badgeNumber = badge;
}

/*
    Summary: Has the PoliceOfficer object inspect a ParkedCar and ParkingMeter object, comparing the time of the car's parking and the time bought with the meter.
    Parameters: Reference to ParkedCar object "car" and reference to ParkingMeter object "meter".
    Return: None
    Preconditions: Both objects in the argument should have data inside of them.
    Postconditions: Calls the issueTicket() method in the case of a parking violation. Uses terminal to print message if no offense was found.
*/
void PoliceOfficer::inspectCar(ParkedCar& car, ParkingMeter& meter)
{
    bool violationSpotted = false;

    int used = car.getMinutesParked();
    int paid = meter.minutesPurchased;

    if (used > paid)
    {
        violationSpotted = true;
    }

    if(violationSpotted)
    {
        this->issueTicket(paid, used, car);
    }
    else
    {
        std::cout << "No violation detected.\n";
    }
}

/*
    Summary: Issues a ticket to a parked car for a parking violation, creating a ParkingTicket object to do so, displaying its contents.
    Parameters: Integer timePaid, representing the minutes on the meter purchased, integer timeUsed, the minutes a car was parked there, and a reference to ParkedCar object "offender", which violated the parking laws.
    Return: Reference to ParkingTicket object that was created, ticket.
    Preconditions: private method; can only be called from PoliceOfficer class. "offender" ParkedCar object should have data.
    Postconditions: a ParkingTicket object is created, and the displayTicket() method is used to put a report to terminal on the ticket's contents.
*/
ParkingTicket& PoliceOfficer::issueTicket(int timePaid, int timeUsed, ParkedCar& offender)
{
    ParkingTicket ticket(this->name, this->badgeNumber, timePaid, timeUsed, offender.brand, offender.model, offender.color, offender.getLicense());
    ticket.displayTicket();

    return ticket;
}
