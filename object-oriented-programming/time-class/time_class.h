/**
 *  @file time_class.h
 */
#ifndef TIME_CLASS_H
#define TIME_CLASS_H
#include <iosfwd>

/** Prints [Input failed] and returns -1. */
int die();

/** Prints the time calculator heading */
void printHeading();

struct Time
{
    int hours;
    int minutes;

    // Function prototypes
    std::istream &read(std::istream &in);
    std::ostream &print(std::ostream &out) const;
    Time sum(Time&);
    Time difference(Time&);
};


#endif
