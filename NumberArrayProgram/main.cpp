#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;

int main()
{
    // Testing round 1: Default construction
    NumberArray arr1;

    arr1.print();

    // Testing round 2: parameterized construction
    NumberArray arr2(5);

    arr2.print();

    // Round 3: fill with values, get max min and avg
    arr2.setNumber(0, 2.0);
    arr2.setNumber(1, 3.6);
    arr2.setNumber(2, 4.5);
    arr2.setNumber(3, 2.2);
    arr2.setNumber(4, 6.7);

    arr2.print();
    cout << arr2.getMin() << endl;
    cout << arr2.getMax() << endl;
    cout << arr2.getAverage() << endl;

    // Round 4: Indexes
    NumberArray arr4;

    // Valid
    arr4.setNumber(2, 4.0);
    arr4.setNumber(0, 2.8);
    arr4.setNumber(9, 9.8);

    cout << arr4.getNumber(2) << endl << arr4.getNumber(0) << endl << arr4.getNumber(9) << endl;

    //Invalid
    arr4.setNumber(-1, 5.0);
    arr4.setNumber(10, 3.2);

    cout << arr4.getNumber(-1) << endl << arr4.getNumber(10) << endl;

    // Round 5: Random numbers
    random_device rd;
    mt19937 engine(rd());

    uniform_int_distribution<int> dist(0, 10);

    NumberArray arr5(5);

    for (int i = 0; i < 5; i++)
    {
        arr5.setNumber(i, dist(rd));
    }

    arr5.print();
    cout << arr5.getMin() << endl << arr5.getAverage() << endl << arr5.getMax() << endl;

    return 0;
}
