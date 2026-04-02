#include <iostream>
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"

using namespace std;

int main()
{
    cout << "Scenario 1: Innocent Motorist\n";

    ParkedCar van("Volkswagen", "Van", "Turquoise", 12345, 30);
    ParkingMeter first(45);
    PoliceOfficer Bob("Smith", 321);

    Bob.inspectCar(van, first); // Should give no ticket

    cout << "Scenario 2: Minor Violation\n";

    ParkedCar truck("Ford", "F150", "Red", 34214, 60);
    ParkingMeter second(30);
    Bob.inspectCar(truck, second); // Should give $25 fee

    cout << "Scenario 3: Major Violation\n";

    ParkedCar sedan("Subaru", "WRX", "Blue", 29345, 200);
    ParkingMeter third(10);
    PoliceOfficer Rob("Sanchez", 123);

    Rob.inspectCar(sedan, third); // Should give $55 fee

    cout << "Scenario 4: General Stress Testing\n";

    ParkedCar generic("Chevrolet", "SUV", "Black", 55667, 70);
    ParkingMeter fourth(10);
    Bob.inspectCar(generic, fourth); // Should give $25 fine

    ParkedCar cyber("Tesla", "Cybertruck", "Gray", 92342, 81);
    ParkingMeter fifth(20);
    Rob.inspectCar(cyber, fifth); // Should give $35 fine

    ParkedCar suv("Honda", "RAV4", "White", 99197, 25);
    ParkingMeter sixth(25);
    Bob.inspectCar(suv, sixth); // Should give no fine or violation.

    return 0;
}
