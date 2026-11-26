/**
 *  @file time_class.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "time_class.h"

Time Time::sum(Time &other)
{
    int time = hours * 60 + minutes;
    int duration = other.hours * 60 + other.minutes;

    int after = time + duration;

    int sumHours = (after / 60 + 11) % 12 + 1;//modified to turn into midnight hour

    int sumMinutes = after % 60;

    return Time{sumHours, sumMinutes};
}

Time Time::difference(Time &other)
{
    int time = hours * 60 + minutes;
    int duration = other.hours * 60 + other.minutes;

    int before = (time - duration) + 24 * 60; //avoid negative remainders

    int diffHours = (before / 60 + 11) % 12 + 1;

    int diffMinutes = before % 60;

    return Time{diffHours, diffMinutes};
}

ostream& Time::print(std::ostream& out) const
{
    out << setfill('0');
    out << hours << ":" << setw(2)
        << minutes << setfill(' ');
    return out;
}

istream& Time::read(std::istream& in) {
    int h, m;
    char colon;
    in >> h >> colon >> m;

    if (!in) {
        in.setstate(ios::failbit);
        return in;
    }

    if (h < 0 || h >= 24 || m < 0 || m >= 60) {
        in.setstate(ios::failbit);
        return in;
    }

    hours = h;
    minutes = m;

        return in;
}

int main()
{
    printHeading();

    Time startTime;
    Time duration;

    // Input section
    cout << "    Time: ";
    if (! startTime.read(cin)) { return die(); }
    cout << "    Duration: ";
    if (! duration.read(cin)) { return die(); }

    // Processing section
    Time after = startTime.sum(duration);
    Time before = startTime.difference(duration);

    // Output section
    cout << endl;
    duration.print(cout) << " hours after, and before, ";
    startTime.print(cout) << " is [";
    after.print(cout) << ", ";
    before.print(cout) << "]" << endl;

    return 0;
}

void printHeading()
{
    cout << "Time and Again" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Give me a time (such as 3:57) and a duration\n"
        << "(such as 1:05), and I'll tell you the sum\n"
        << "(that is, the time that follows the given time\n"
        << "by the given duration), and difference (the time that\n"
        << "precedes the given time by that duration)." << endl;
    cout << endl;
}

int die()
{
    cout << "[Failed Input]" << endl;
    cout.flush();
    return -1;
}
