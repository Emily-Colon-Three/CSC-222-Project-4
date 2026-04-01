#include "Date.h"
#include <string>
#include <sstream>

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
