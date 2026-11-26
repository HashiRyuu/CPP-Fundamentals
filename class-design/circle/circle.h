#ifndef CLASS_DESIGN_CIRCLE_CIRCLE_H
#define CLASS_DESIGN_CIRCLE_CIRCLE_H
#include "point.h"
#include <string>

class Circle
{
   Point centers;
   double radiuses;
public:
   Circle() = default;
   Circle(Point center, double r);
   Point center() const;
   double area() const;
   double radius() const;
   double circumference() const;
   void translate(const Point& other);
   std::string toString() const;
};

#endif
