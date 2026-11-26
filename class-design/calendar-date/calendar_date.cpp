#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class CalendarDate {
private:
    int day;
    int month;
    int year;

public:
    CalendarDate(int d, int m, int y) : day(d), month(m), year(y) {}

    int getDay() const { return day; }
    void setDay(int d) { day = d; }

    int getMonth() const { return month; }
    void setMonth(int m) { month = m; }

    int getYear() const { return year; }
    void setYear(int y) { year = y; }

    string toString() const {
        ostringstream output;
        output << "Date: " << year << "/" << month << "/" << day;
        return output.str();
    }
};

int main() {
    // Create a CalendarDate object
    CalendarDate date1(12, 5, 2023);

    // Display the date information
    cout << "Date Information:" << endl;
    cout << date1.toString() << endl;

    // Update the date information
    date1.setDay(25);
    date1.setMonth(10);
    date1.setYear(2024);

    // Display the updated date information
    cout << "Updated Date Information:" << endl;
    cout << date1.toString() << endl;

    return 0;
}
