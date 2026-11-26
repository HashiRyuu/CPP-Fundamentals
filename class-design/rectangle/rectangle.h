#ifndef CLASS_DESIGN_RECTANGLE_P1_H
#define CLASS_DESIGN_RECTANGLE_P1_H

struct Point {double x, y;};
struct Dimension {double width, height;};


#include <string>

class Rectangle {

// ----------------------------------
double x, y, width, height;

public:
Rectangle() = default;
Rectangle(double x, double y, double width, double height);
Dimension getSize() const;
Point getLocation() const;
double getArea() const;
void setBounds(double x, double y, double width, double height);
std::string toString() const;
};

#endif
