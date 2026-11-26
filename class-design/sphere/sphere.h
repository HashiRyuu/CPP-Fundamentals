
#ifndef CLASS_DESIGN_SPHERE_SPHERE_H
#define CLASS_DESIGN_SPHERE_SPHERE_H
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

const double kPi = std::acos(-1);

class Sphere
{
   double r;
public:
   Sphere() = default;
   
   Sphere(double rad);
   
   double radius() const;
   
   double volume() const;
   
   double area() const;
   
   void set_radius(double rad);
   
   Sphere scale(double factor) const;
   
   std::string to_string() const;
   
};




#endif
