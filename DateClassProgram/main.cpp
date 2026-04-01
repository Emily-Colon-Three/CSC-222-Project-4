/*
    This program acts as a test for the Date class. It performs a number of different operations on different dates, storing and modifying values within Date objects.
*/
#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    // Basic tests
    Date regular;

    cout << regular.getFormatDMY() << endl;
    cout << regular.getFormatMDY_num() << endl;
    cout << regular.getFormatMDY_char() << endl;

    // Validation Regression
    regular.setDate(13, 45, 2018);
    cout << regular.getFormatDMY() << endl;

    regular.setDate(4, 31, 2000);
    cout << regular.getFormatDMY() << endl;

    regular.setDate(2, 29, 2009);
    cout << regular.getFormatDMY() << endl;

    return 0;
}
