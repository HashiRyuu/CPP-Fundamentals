#include <iostream>
#include <string>

class Dieter {
private:
    std::string name;
    double weight;  // in kilograms
    double height;  // in meters

public:
    Dieter(std::string name, double weight, double height) : name(name), weight(weight), height(height) {}

    double calculateBMI() const {
        return weight / (height * height);
    }

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Weight: " << weight << " kg" << std::endl;
        std::cout << "Height: " << height << " m" << std::endl;
        std::cout << "BMI: " << calculateBMI() << std::endl;
    }
};

int main() {
    Dieter person("John", 70.0, 1.75);
    person.displayInfo();

    return 0;
}
