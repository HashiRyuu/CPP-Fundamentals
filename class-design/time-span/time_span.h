#ifndef CLASS_DESIGN_TIME_SPAN_P1_H
#define CLASS_DESIGN_TIME_SPAN_P1_H
#include <string> //for string

class TimeSpan
{
   int h, m; // Hours and minutes

public:
    // Default constructor
    TimeSpan() = default;

    // Constructor to initialize hours and minutes
    TimeSpan(int hour, int minute);

    // Accessors
    int hours() const;
    int minutes() const;
    double hourspan() const;

    // Add time
    void add(int hour, int minute);
    void add(const TimeSpan &other);

    // Convert to string
    std::string toString() const;
};


#endif
