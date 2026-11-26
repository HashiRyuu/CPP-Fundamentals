#ifndef CLASS_DESIGN_CYLINDER_CYLINDER_H
#define CLASS_DESIGN_CYLINDER_CYLINDER_H
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

const double kPi = std::acos(-1);

class Cylinder
{
   double r, h;
public:
   Cylinder() = default;
   Cylinder(double rad, double heig);
   double radius() const;
   double height() const;
   double volume() const;
   double area() const;
   void set_height(double heig);
   void set_radius(double rad);
   void swap();
   std::string to_string() const;
   
};

#endif
