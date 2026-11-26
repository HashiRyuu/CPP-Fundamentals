#include <iostream>
#include <cstdlib>
#include <ctime>

class RiggedDice {
private:
    int min;

public:
    RiggedDice(int min) : min(min) {
        // Seed the random number generator
        srand(time(nullptr));
    }

    int roll() const {
        int result;
        do {
            result = rand() % 6 + 1; // Roll a normal six-sided die
        } while (result < min);
        return result;
    }
};

int main() {
    // Testing RiggedDice
    RiggedDice dice(4); // Minimum roll is 4
    std::cout << "Rolling the rigged dice..." << std::endl;
    std::cout << "You rolled: " << dice.roll() << std::endl;

    return 0;
}
