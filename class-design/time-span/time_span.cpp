#include "time_span.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;
// Constructor implementation
TimeSpan::TimeSpan(int hour, int minute) : h(hour), m(minute)
{
    // Normalize minutes
    if (m >= 60)
    {
        h += m / 60;
        m %= 60;
    }
}

// Accessor implementations
int TimeSpan::hours() const
{
    return h;
}

int TimeSpan::minutes() const
{
    return m;
}

// Calculate total hours including minutes
double TimeSpan::hourspan() const
{
    return h + static_cast<double>(m) / 60.0;
}

// Add hours and minutes
void TimeSpan::add(int hour, int minute)
{
    h += hour;
    m += minute;

    // Normalize minutes
    if (m >= 60)
    {
        h += m / 60;
        m %= 60;
    }
}

// Add another TimeSpan
void TimeSpan::add(const TimeSpan &other)
{
    h += other.h;
    m += other.m;

    // Normalize minutes
    if (m >= 60)
    {
        h += m / 60;
        m %= 60;
    }
}

// Convert TimeSpan to string
std::string TimeSpan::toString() const
{
    std::ostringstream oss;
    oss << std::setfill('0') << h << ":" << std::setw(2) << m;
    return oss.str();
}
