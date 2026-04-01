/* This is a header file containing the definition of a class called "Date", with declarations of all its member functions. It holds a day, month, and year, and contains functionality which
allows that data to be used in calculations and displaying the given date.*/
#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

class Date {
private: // Private data members
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d); // Constructor
    ~Date(); // Destructor

    // Inline accessor functions
    inline int getYear() const
    {
        return year;
    }
    inline int getMonth() const
    {
        return month;
    }
    inline int getDay() const
    {
        return day;
    }

    // Member function prototypes
    void setDate(int m, int d, int y);

    bool isLeapYear() const;
    bool isLeapYear(int y) const;

    int lastDay() const;
    int lastDay(int m, int y) const;

    std::string getFormatMDY_num() const;
    std::string getFormatMDY_char() const;
    std::string getFormatDMY() const;

    // Operator overloads
    Date& operator++();
    Date operator++(int);

    Date& operator--();
    Date operator--(int);

    Date operator-(const Date);

    // Friend overloads
    friend std::ostream& operator<<(std::ostream&, Date&);
    friend std::istream& operator>>(std::istream&, Date&);
};

#endif // DATE_H
