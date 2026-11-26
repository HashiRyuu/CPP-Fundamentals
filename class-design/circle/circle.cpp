#include "circle.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

Circle::Circle(Point center, double r)
   : centers(center), radiuses(r) {}
   

Point Circle::center() const
{
   return centers;
}


double Circle::area() const
{
   return kPi * pow(radiuses, 2);
}

double Circle::radius() const
{
   return radiuses;
}

double Circle::circumference() const
{
   return 2 * kPi * radiuses;
}


void Circle::translate(const Point& other)
{
   centers = {centers.x() + other.x(), centers.y() + other.y()};
}

string Circle::toString() const
{
    ostringstream oss;
    oss << "Circle(" << centers.toString() << ", " << radiuses << ")";
    return oss.str();
}
