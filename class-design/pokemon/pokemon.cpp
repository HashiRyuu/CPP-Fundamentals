#include <iostream>
#include <string>

class Pokemon {
private:
    std::string name;
    std::string type;
    int level;

public:
    Pokemon(std::string name, std::string type, int level) : name(name), type(type), level(level) {}

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "Level: " << level << std::endl;
    }
};

int main() {
    Pokemon pikachu("Pikachu", "Electric", 25);
    Pokemon charmander("Charmander", "Fire", 18);

    pikachu.displayInfo();
    std::cout << std::endl;
    charmander.displayInfo();

    return 0;
}
