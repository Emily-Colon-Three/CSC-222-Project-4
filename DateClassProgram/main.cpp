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

    // Subtraction Operator
    Date dateOne(2014, 4, 18);
    Date dateTwo(2014, 4, 10);

    cout << (dateOne - dateTwo) << " days.\n";

    dateOne.setDate(2, 2, 2006);
    dateTwo.setDate(11, 10, 2003);

    cout << (dateOne - dateTwo) << " days.\n";

    // Increment and Decrement
    Date x(2008, 2, 29);

    cout << (++x).getFormatDMY() << endl;
    cout << (--x).getFormatDMY() << endl;

    cout << (x++).getFormatDMY() << endl;
    cout << (x--).getFormatDMY() << endl;

    return 0;
}
