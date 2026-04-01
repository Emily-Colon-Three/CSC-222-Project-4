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

    return 0;
}
