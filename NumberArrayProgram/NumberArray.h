#ifndef DATE_H
#define DATE_H

class NumberArray{
private:
    int size;
    double* data;

public:
    NumberArray(); // Overloaded, this one has no parameters.
    NumberArray(int);
    ~NumberArray();

    void setNumber(int, double);

    inline double getNumber(int index)
    {
        if (index < size && index >= 0) // Index validation
        {
            return data[index];
        }
        else
        {
            return 0;
        }
    }

    double getMin() const;
    double getMax() const;
    double getAverage() const;

    void print() const;
};

#endif // DATE_H
