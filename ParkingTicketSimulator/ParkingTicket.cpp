#include "ParkingTicket.h"
#include <string>
#include <iostream>

/* Constructs ParkingTicket object, passing in the issuing officer's name and badge number, then the number of minutes paid for along with the number parked by the car, then lastly
data about the car, its brand, model, color, and license plate.*/
ParkingTicket::ParkingTicket(std::string name, int badge, int timeBought, int timeUsed, std::string brand, std::string model, std::string color, int cl)
{
    this->officerName = name;
    this->officerBadge = badge;

    this->minutesBought = timeBought;
    this->minutesParked = timeUsed;

    this->carBrand = brand;
    this->carModel = model;
    this->carColor = color;
    this->carLicense = cl;
}

/*
    Summary: Calculates the fee, in dollars, needed to pay for the amount of time stayed over at a parking meter.
    Parameters: None.
    Return: The fee, an integer.
    Preconditions: ParkingTicket object has data for the minutes parked and purchased for a car.
    Postconditions: None
*/
int ParkingTicket::calculateFee()
{
    int fee = 25;
    int timeOver = (this->minutesParked - this->minutesBought);

    while (timeOver > 60)
    {
        timeOver -= 60;

        fee += 10;
    }

    return fee;
}

/*
    Summary: Prints out the information from the ParkingTicket object into a neatly formatted ticket report.
    Parameters: None
    Return: None
    Preconditions: All data members in ParkingTicket object must be filled in.
    Postconditions: Terminal is utilized with iostream to print decently large report.
*/
void ParkingTicket::displayTicket()
{
    std::cout << "PARKING TICKET\n\n";
    std::cout << "Officer Name: " << this->officerName << std::endl;
    std::cout << "Badge Number: " << this->officerBadge << std::endl << std::endl;

    std::cout << "Car Brand: " << this->carBrand << std::endl;
    std::cout << "Car Model: " << this->carModel << std::endl;
    std::cout << "Car Color: " << this->carColor << std::endl;
    std::cout << "License Plate: " << this->carLicense << std::endl << std::endl;

    std::cout << "Time Paid for: " << this->minutesBought << " minutes" << std::endl;
    std::cout << "Time Car was Parked: " << this->minutesParked << " minutes" << std::endl;
    std::cout << "Fee Issued: $" << this->calculateFee() << std::endl;
}
