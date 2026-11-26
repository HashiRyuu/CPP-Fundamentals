/**
 *  @file time_arithmetic.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int main()
{

    // variables
    int timeHour, timeMinute, durHour, durMinute;
    int time, duration;
    int sumHours, sumMinutes;
    int diffHours, diffMinutes;
    int after, before;

    //input
    cout << "Give me a time (such as 3:57) and a duration" << endl;
    cout << "(such as 1:05), and I'll tell you the sum" << endl;
    cout << "(that is, the time that follows the given time" << endl;
    cout << "by the given duration), and difference (the time" << endl;
    cout << "that precedes the given time by that duration)." << endl;
    cout << "\n     time: ";
    cin >> timeHour;
    cin.get();//discard the colon
    cin>> timeMinute;
    cout << "\n     Duration: ";
    cin >> durHour;
    cin.get();//discard the colon
    cin >> durMinute;

    //processing
    time = timeHour * 60 + timeMinute;

    duration = durHour * 60 + durMinute;

    after = time + duration;

    before = (time - duration) + 24 * 60; //avoid negative remainders

    sumHours = (after / 60 + 11) % 12 + 1;//modified to turn into midnight hour

    sumMinutes = after % 60;

    diffHours = (before / 60 + 11) % 12 + 1;

    diffMinutes = before % 60;

    //output
    cout << setfill('0');//this fill the 0 at every place setw created
    cout << durHour << ":" << setw(2) << durMinute
         << " hours after, and before, "
         << timeHour << ":" << setw(2) << timeMinute
         << " is [" << sumHours << ":" << setw(2) << sumMinutes
         << ", "
         << diffHours << ":" << setw(2) << diffMinutes << "]" << endl;

    return 0;
}
