#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0.0, double y = 0.0)
        : x(x), y(y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double x) {
        this->x = x;
    }

    void setY(double y) {
        this->y = y;
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(3.5, 2.8);
    p1.display();

    return 0;
}
