/**
    @file shape_inheritance.cpp
*/
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
using namespace std;


#include "shape_inheritance.h"

//Circle
Circle::Circle(double r, double x, double y)
    : Point(x, y), radius(r) {}


double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return kPi * pow(radius, 2);
}

double Circle::getCircumference() const
{
    return 2 * kPi * radius;
}

string Circle::toString(int decimals) const
{
    ostringstream oss;
    oss <<  std::fixed << std::setprecision(decimals)
    << "Circle(" << "radius=" << radius << ", center=" << Point::toString(decimals) << ")";
    return oss.str();
}

//Cylinder
Cylinder::Cylinder(double h, double r, double x, double y)
    : Circle(r, x, y), height(h) {}


double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::getVolume() const
{
    return kPi * getRadius() * getRadius() * height;
}

double Cylinder::getArea() const
{
     return (2 * kPi * getRadius() * getRadius()) + (2 * kPi * getRadius() * height);
}

std::string Cylinder::toString(int decimals) const
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimals) << "Cylinder(height="
    << height << ", base=" << Circle::toString(decimals) << ")";
    return oss.str();
}
