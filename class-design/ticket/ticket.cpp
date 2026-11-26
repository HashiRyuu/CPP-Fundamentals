#include <iostream>
#include <string>

class Ticket {
private:
    double price;
    int daysEarly;
    std::string promotionCode;

public:
    Ticket(double price, int daysEarly, std::string promotionCode = "") 
        : price(price), daysEarly(daysEarly), promotionCode(promotionCode) {}

    double getPrice() const { return price; }
    int getDaysEarly() const { return daysEarly; }
    std::string getPromotionCode() const { return promotionCode; }
};

int main() {
    Ticket ticket(50.0, 10, "SUMMER2024");
    
    std::cout << "Ticket price: $" << ticket.getPrice() << std::endl;
    std::cout << "Days early: " << ticket.getDaysEarly() << std::endl;
    std::cout << "Promotion code: " << ticket.getPromotionCode() << std::endl;

    return 0;
}
