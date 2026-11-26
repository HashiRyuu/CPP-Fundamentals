#include <iostream>
#include <string>

class ClockTime {
private:
    int hours;
    int minutes;
    std::string period;

public:
    ClockTime(int hours = 0, int minutes = 0, const std::string& period = "am")
        : hours(hours), minutes(minutes), period(period) {}

    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    std::string getPeriod() const {
        return period;
    }

    void setHours(int hours) {
        this->hours = hours;
    }

    void setMinutes(int minutes) {
        this->minutes = minutes;
    }

    void setPeriod(const std::string& period) {
        this->period = period;
    }

    void displayTime() const {
        std::cout << hours << ":" << minutes << " " << period << std::endl;
    }
};

int main() {
    ClockTime time(10, 30, "am");
    time.displayTime();

    return 0;
}
