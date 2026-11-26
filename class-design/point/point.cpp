#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double distanceTo(const Point& other) const {
        double dx = other.x - x;
        double dy = other.y - y;
        return sqrt(dx * dx + dy * dy);
    }
};

class Line {
private:
    Point start;
    Point end;

public:
    Line(const Point& start, const Point& end) : start(start), end(end) {}

    double length() const {
        return start.distanceTo(end);
    }
};

int main() {
    Point p1(1.0, 1.0);
    Point p2(4.0, 5.0);

    Line line(p1, p2);
    std::cout << "Length of the line: " << line.length() << std::endl;

    return 0;
}
