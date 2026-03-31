#include "NumberArray.h"
#include <iostream>

const int DEFAULT_SIZE = 10;

NumberArray::NumberArray()
{
    NumberArray::size = DEFAULT_SIZE;

    NumberArray::data = new double[size]; // Dynamically allocates memory according to given size.

    for (int i = 0; i < NumberArray::size; i++)
    {
        NumberArray::data[i] = 0.0; // Assigns value to default for all indices in the array
    }
}

NumberArray::NumberArray(int s = DEFAULT_SIZE) // s means size in this case
{
    NumberArray::size = s;

    NumberArray::data = new double[size]; // Dynamically allocates memory according to given size.

    for (int i = 0; i < NumberArray::size; i++)
    {
        NumberArray::data[i] = 0.0; // Assigns value to default for all indices in the array
    }
}

NumberArray::~NumberArray()
{
    delete[] NumberArray::data; // Frees up all allocated memory from data

    std::cout << "Memory de-allocated.\n"; // Prints message confirming memory release
}

void NumberArray::setNumber(int i, double val)
{
    if (i < NumberArray::size && i >= 0)
    {
        NumberArray::data[i] = val; // Only sets the value if index is valid, avoiding undefined behavior
    }
}

double NumberArray::getMin() const
{
    double min = NumberArray::data[0]; // Minimum value initialized to very first index, before the rest of the search finds the true minimum, if it is not the lowest.

    for (int i = 1; i < NumberArray::size; i++) // Starts at 1 because 0 already checked
    {
        if (NumberArray::data[i] < min)
        {
            min = NumberArray::data[i];
        }
    }

    return min; // Once the minimum is found, full array searched, it is returned.
}

double NumberArray::getMax() const
{
    double max = NumberArray::data[0]; // Max first set to the initial value

    for (int i = 1; i < NumberArray::size; i++)
    {
        if (NumberArray::data[i] > max)
        {
            max = NumberArray::data[i]; // If larger than the max, the element becomes new maximum value
        }
    }

    return max;
}

double NumberArray::getAverage() const
{
    double average = 0;

    for (int i = 0; i < NumberArray::size; i++)
    {
        average += NumberArray::data[i]; // Value is added to average
    }

    average /= NumberArray::size; // Average divided by size of array, the number of values in it.

    return average; // Average, now found, is returned.
}

void NumberArray::print() const
{
    for (int i = 0; i < NumberArray::size; i++)
    {
        std::cout << NumberArray::data[i] << " "; // Prints out elements with space between them
    }

    std::cout << std::endl; // Adds a final return
}
