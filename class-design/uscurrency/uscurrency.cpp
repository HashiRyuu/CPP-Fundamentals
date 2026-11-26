#include <iostream>

class USCurrency {
private:
    int dollars;
    int cents;

public:
    USCurrency(int dollars = 0, int cents = 0) : dollars(dollars), cents(cents) {}

    int getDollars() const {
        return dollars;
    }

    int getCents() const {
        return cents;
    }

    void display() const {
        std::cout << "Amount: $" << dollars << ".";
        if (cents < 10) {
            std::cout << "0";
        }
        std::cout << cents << std::endl;
    }
};

int main() {
    USCurrency amount(20, 50);
    amount.display();

    return 0;
}
