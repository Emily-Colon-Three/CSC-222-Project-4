/*
    This program acts as a test for the Date class. It performs a number of different operations on different dates, storing and modifying values within Date objects.
*/
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date dateOne(2026, 3, 16); // Valid date

    // Trying all date formats
    cout << dateOne.getFormatMDY_num() << endl;
    cout << dateOne.getFormatMDY_char() << endl;
    cout << dateOne.getFormatDMY() << endl;

    // Second round of testing: invalid dates.
    Date dateTwo(0, 1, 1);
    cout << dateTwo.getFormatDMY() << endl;

    dateTwo.setDate(13, 1, 2000);
    cout << dateTwo.getFormatDMY() << endl;

    dateTwo.setDate(2, 30, 2000);
    cout << dateTwo.getFormatDMY() << endl;

    // Third round of testing: Leap year validation for February
    Date dateThree(2000, 2, 29);
    cout << dateThree.getFormatDMY() << endl;

    dateThree.setDate(2, 29, 1900); // Invalid
    cout << dateThree.getFormatDMY() << endl;

    // Fourth round of testing: last day for non-February months
    Date dateFour(2000, 6, 31); // Invalid
    cout << dateFour.getFormatDMY() << endl;

    dateFour.setDate(6, 30, 2000); // Valid
    cout << dateFour.getFormatDMY() << endl;

    dateFour.setDate(4, 31, 2000); // Invalid
    cout << dateFour.getFormatDMY() << endl;

    dateFour.setDate(4, 30, 2000); // Valid
    cout << dateFour.getFormatDMY() << endl;

    dateFour.setDate(2, 28, 2026); // Valid
    cout << dateFour.getFormatDMY() << endl;

    // Accessor function testing
    cout << dateOne.getDay() << endl;
    cout << dateOne.getMonth() << endl;
    cout << dateOne.getYear() << endl;

    cout << dateTwo.getDay() << endl;
    cout << dateTwo.getMonth() << endl;
    cout << dateTwo.getYear() << endl;

    return 0;
}
