#include "Date.h"
#include <string>
#include <sstream>
#include <iostream>

// Constants for month numbers
const int MONTH_JAN = 1;
const int MONTH_FEB = 2;
const int MONTH_MAR = 3;
const int MONTH_APR = 4;
const int MONTH_MAY = 5;
const int MONTH_JUN = 6;
const int MONTH_JUL = 7;
const int MONTH_AUG = 8;
const int MONTH_SEP = 9;
const int MONTH_OCT = 10;
const int MONTH_NOV = 11;
const int MONTH_DEC = 12;

// Constants for month lengths (Non-leap)
const int JANUARY = 31;
const int FEBRUARY = 28;
const int MARCH = 31;
const int APRIL = 30;
const int MAY = 31;
const int JUNE = 30;
const int JULY = 31;
const int AUGUST = 31;
const int SEPTEMBER = 30;
const int OCTOBER = 31;
const int NOVEMBER = 30;
const int DECEMBER = 31;

Date::Date(int year, int month, int day) : year(1900), month(1), day(1) // Default date is January 1st, 1900.
{
    setDate(month, day, year);
}

Date::~Date() {}; // Destructor

void Date::setDate(int m, int d, int y)
{
    // Find the number of days in the month selected
    int lastDayOfMonth = lastDay(m, y);

    if ((y > 0 && m > 0 && d > 0) && (m <= 12 && d <= lastDayOfMonth)) // Ensures input within the minimum and maximum values. Year has no max.
    {
        Date::day = d;
        Date::month = m;
        Date::year = y;
    }
    else // Defaults to this date if input outside range
    {
        Date::day = 1;
        Date::month = 1;
        Date::year = 1900;
    }
}

bool Date::isLeapYear() const
{
    bool leapYear = false;

    if (Date::year % 4 == 0)
    {
        if (Date::year % 100 == 0)
        {
            if (Date::year % 400 == 0)
            {
                leapYear = true;
            }
        }
        else
        {
            leapYear = true;
        }
    }

    return leapYear;
}

bool Date::isLeapYear(int y) const
{
    bool leapYear = false; // By default, most years are not leap years

    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                leapYear = true; // If divisible by 100 but also 400
            }
        }
        else
        {
            leapYear = true; // If divisible by 4, but not 100
        }
    }

    return leapYear;
}

int Date::lastDay() const
{
    if (Date::month == 1)
    {
        return JANUARY;
    }
    if (Date::month == 2)
    {
        if (isLeapYear())
        {
            return FEBRUARY + 1;
        }
        else
        {
            return FEBRUARY;
        }
    }
    if (Date::month == 3)
    {
        return MARCH;
    }
    if (Date::month == 4)
    {
        return APRIL;
    }
    if (Date::month == 5)
    {
        return MAY;
    }
    if (Date::month == 6)
    {
        return JUNE;
    }
    if (Date::month == 7)
    {
        return JULY;
    }
    if (Date::month == 8)
    {
        return AUGUST;
    }
    if (Date::month == 9)
    {
        return SEPTEMBER;
    }
    if (Date::month == 10)
    {
        return OCTOBER;
    }
    if (Date::month == 11)
    {
        return NOVEMBER;
    }
    if (Date::month == 12)
    {
        return DECEMBER;
    }
}

int Date::lastDay(int m, int y) const
{
    if (m == 1)
    {
        return JANUARY;
    }
    if (m == 2)
    {
        if (isLeapYear(y))
        {
            return FEBRUARY + 1;
        }
        else
        {
            return FEBRUARY;
        }
    }
    if (m == 3)
    {
        return MARCH;
    }
    if (m == 4)
    {
        return APRIL;
    }
    if (m == 5)
    {
        return MAY;
    }
    if (m == 6)
    {
        return JUNE;
    }
    if (m == 7)
    {
        return JULY;
    }
    if (m == 8)
    {
        return AUGUST;
    }
    if (m == 9)
    {
        return SEPTEMBER;
    }
    if (m == 10)
    {
        return OCTOBER;
    }
    if (m == 11)
    {
        return NOVEMBER;
    }
    if (m == 12)
    {
        return DECEMBER;
    }
}

std::string Date::getFormatMDY_num() const
{
    std::stringstream ss;
    ss << Date::month << "/" << Date::day << "/" << Date::year;

    std::string format = ss.str();
    return format;
}

std::string Date::getFormatMDY_char() const
{
    std::string monthName;

    switch (Date::month)
    {
    case 1:
        monthName = "January";
        break;
    case 2:
        monthName = "February";
        break;
    case 3:
        monthName = "March";
        break;
    case 4:
        monthName = "April";
        break;
    case 5:
        monthName = "May";
        break;
    case 6:
        monthName = "June";
        break;
    case 7:
        monthName = "July";
        break;
    case 8:
        monthName = "August";
        break;
    case 9:
        monthName = "September";
        break;
    case 10:
        monthName = "October";
        break;
    case 11:
        monthName = "November";
        break;
    case 12:
        monthName = "December";
        break;
    default:
        exit(1); // Should not be possible to have an invalid month number
    }

    std::stringstream ss;
    ss << monthName << " " << Date::day << ", " << Date::year;

    std::string format = ss.str();

    return format;
}

std::string Date::getFormatDMY() const
{
    std::string monthName;

    switch (Date::month)
    {
    case 1:
        monthName = "January";
        break;
    case 2:
        monthName = "February";
        break;
    case 3:
        monthName = "March";
        break;
    case 4:
        monthName = "April";
        break;
    case 5:
        monthName = "May";
        break;
    case 6:
        monthName = "June";
        break;
    case 7:
        monthName = "July";
        break;
    case 8:
        monthName = "August";
        break;
    case 9:
        monthName = "September";
        break;
    case 10:
        monthName = "October";
        break;
    case 11:
        monthName = "November";
        break;
    case 12:
        monthName = "December";
        break;
    default:
        exit(1); // Should not be possible to have an invalid month number
    }

    std::stringstream ss;
    ss << Date::day << " " << monthName << ", " << Date::year;

    std::string format = ss.str();

    return format;
}

/*
    Summary: Increments the date stored in a Date object by 1 day, following calendar rules.
    Parameters: None
    Return: A reference to the now-updated Date object.
    Preconditions: None
    Postconditions: The object on which this operation is applied to will have its day, month, and possibly year changed, depending on the exact date held.
*/
Date& Date::operator++()
{
    if (this->day >= this->lastDay())
    {
        if (this->month >= 12) // If month is the last of the year
        {
            this->day = 1;
            this->month = 1;
            this->year += 1; // Year goes up when date resets
        }
        else
        {
            this->day = 1;
            this->month += 1; // Month goes up when the last day is passed
        }
    }
    else
    {
        this->day += 1;
    }

    return *this;
}

/*
    Summary: Increments the date stored in Date object, then returns a version of the object pre-update.
    Parameters: None
    Return: A full Date object, data captured from before the increment was applied.
    Preconditions: None.
    Postconditions: Changes the actual data of the object the overloaded operation is applied to, despite that updated version not being the return.
*/
Date Date::operator++(int)
{
    Date temp = *this; // Stores original data temporarily

    ++*this; // Increments Date object
    return temp;
}

/*
    Summary: Turns the date held within Date backwards by a single day, following calendar rules.
    Parameters: None
    Return: Pointer to changed Date object
    Preconditions: None
    Postconditions: The object which this operation is applied to will have its date turned back by 1 day.
*/
Date& Date::operator--()
{
    if (this->day <= 1)
    {
        if (this->month <= 1)
        {
            this->day = this->lastDay(12, this->year);
            this->month = 12;
            this->year -= 1;
        }
        else
        {
            this->day = this->lastDay();
            this->month -= 1;
        }
    }
    else
    {
        this->day -= 1;
    }

    return *this;
}

/*
    Summary: Decrements the date held within a Date object by 1, but returns a version of the object's data from before the update.
    Parameters: None
    Return: A whole Date object which reflects the state of the object before operator is applied.
    Preconditions: None
    Postconditions: The object itself is altered to be a day before the initial date.
*/
Date Date::operator--(int)
{
    Date temp = *this;

    --*this;
    return temp;
}

/*
    Summary: Finds the difference, in days, between two dates held within Date class objects.
    Parameters: A constant Date object, date, referring to the object on the right of the minus operator.
    Return: An integer which is the absolute number of days between two dates.
    Preconditions: None
    Postconditions: None
*/
int Date::operator-(const Date date)
{
    int total = 0;
    int finalYear;

    if (this->year < date.year)
    {
        for (int y = this->year; y < date.year; y++)
        {
            if (isLeapYear(y))
            {
                total += 366;
            }
            else
            {
                total += 365;
            }

            finalYear = y;
        }
    }
    else if (this->year > date.year)
    {
        for (int y = date.year; y < this->year; y++)
        {
            if (isLeapYear(y))
            {
                total += 366;
            }
            else
            {
                total += 365;
            }

            finalYear = y;
        }
    }
    else
    {
        finalYear = this->year;
    }

    // At this point, the year difference is accounted for.
    if (this->month < date.month)
    {
        for (int m = this->month; m < date.month; m++)
        {
            total += lastDay(m, finalYear);
        }

        total += date.day - this->day;
    }
    if (this->month > date.month)
    {
        for (int m = date.month; m < this->month; m++)
        {
            total += lastDay(m, finalYear);
        }

        total += this->day - date.day;
    }

    return total;
}

// Friend overloads
/*
    Summary: Allows the Date object to be used with cout, displaying the date with ease.
    Parameters: An ostream object called out, which collects the stream of output to be returned, and date, a Date object reference to the date being used with insertion operator.
    Return: The ostream object, out, putting the formatted date into the place where it was called to be inserted.
    Preconditions: Uses cout, depends on it.
    Postconditions: None of significance.
*/
std::ostream& operator<<(std::ostream& out, Date& date)
{
    out << date.month << " " << date.day << ", " << date.year;
    return out;
}

/*
    Summary: Allows the Date object to be used with cin, extracting input to set the object's date. Only valid dates will work.
    Parameters: istream reference in, which is the source of input for this overload, and date, a reference to a Date object being extracted into.
    Return: The istream reference, in.
    Preconditions: The user must enter valid data to have the date be actually set, thanks to built-in validation.
    Postconditions: Uses cout to print messages to terminal. Sets the date of the object in parameters.
*/
std::istream& operator>>(std::istream& in, Date& date)
{
    int y, m, d;

    std::cout << "What is the day?\n";
    in >> d;

    std::cout << "What is the month?\n";
    in >> m;

    std::cout << "What is the year?\n";
    in >> y;

    date.setDate(m, d, y); // Sets date with input.
    return in;
}
