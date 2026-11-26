#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int day = 1, int month = 1, int year = 2000)
        : day(day), month(month), year(year) {}

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void setDay(int day) {
        this->day = day;
    }

    void setMonth(int month) {
        this->month = month;
    }

    void setYear(int year) {
        this->year = year;
    }

    void display() const {
        std::cout << year << "-" << month << "-" << day << std::endl;
    }
};

int main() {
    Date today(12, 5, 2024);
    today.display();

    return 0;
}
