#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Product {
private:
    string description;
    string productNumber;
    double price;

public:
    Product(string desc, string prodNum, double pri)
        : description(desc), productNumber(prodNum), price(pri) {}

    string getDescription() const { return description; }
    void setDescription(string desc) { description = desc; }

    string getProductNumber() const { return productNumber; }
    void setProductNumber(string prodNum) { productNumber = prodNum; }

    double getPrice() const { return price; }
    void setPrice(double pri) { price = pri; }

    string toString() const {
        ostringstream output;
        output << "Description: " << description << ", Product Number: " << productNumber << ", Price: $" << price;
        return output.str();
    }
};

int main() {
    // Create a Product object
    Product product1("Toaster", "T123", 29.99);

    // Display the product information
    cout << "Product Information:" << endl;
    cout << product1.toString() << endl;

    // Update the product information
    product1.setDescription("Microwave");
    product1.setPrice(99.99);

    // Display the updated product information
    cout << "Updated Product Information:" << endl;
    cout << product1.toString() << endl;

    return 0;
}
