#include <iostream>
#include <string>

class RadioStation {
private:
    std::string name;
    std::string band;
    double frequency;

public:
    RadioStation(const std::string& name = "", const std::string& band = "", double frequency = 0.0)
        : name(name), band(band), frequency(frequency) {}

    std::string getName() const {
        return name;
    }

    std::string getBand() const {
        return band;
    }

    double getFrequency() const {
        return frequency;
    }

    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Band: " << band << std::endl;
        std::cout << "Frequency: " << frequency << std::endl;
    }
};

int main() {
    RadioStation station("BBC Radio 1", "FM", 97.6);
    station.display();

    return 0;
}
