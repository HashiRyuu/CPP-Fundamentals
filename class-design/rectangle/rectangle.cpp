#include <cmath>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;
#include "rectangle.h"

Rectangle::Rectangle(double x, double y, double width, double height)
 : x(x), y(y), width(width), height(height) {}
 
 
Dimension Rectangle::getSize() const
{
   // Returns a Dimension struct filled with width and height of the rectangle
   //return {width, height}; faster way 
   Dimension dim;
   dim.width = width;
   dim.height = height;
   return dim;
}

Point Rectangle::getLocation() const
{
   // Returns a Point struct filled with x and y coordinates 
   //return {x, y}; faster way
   Point pt;
   pt.x = x;
   pt.y = y;
   return pt;
}

double Rectangle::getArea() const
{
   return width * height;
}

void Rectangle::setBounds(double x, double y, double width, double height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}
string Rectangle::toString() const
{
    std::ostringstream oss;
    oss << "Rectangle(x->" << fixed << setprecision(1) << x
        << ", y->" << fixed << setprecision(1) << y
        << ", width->" << fixed << setprecision(1) << width
        << ", height->" << fixed << setprecision(1) << height << ")";
    return oss.str();
}

