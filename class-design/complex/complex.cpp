#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0, double imaginary = 0)
        : real(real), imaginary(imaginary) {}

    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }

    void setReal(double real) {
        this->real = real;
    }

    void setImaginary(double imaginary) {
        this->imaginary = imaginary;
    }

    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 4);
    c1.display();

    return 0;
}
