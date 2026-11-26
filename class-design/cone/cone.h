
#ifndef CLASS_DESIGN_CONE_CONE_H
#define CLASS_DESIGN_CONE_CONE_H
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

const double kPi = std::acos(-1);

class Cone
{
   double r, h;
public:
   Cone() = default;
   Cone(double rad, double heig);
   double radius() const;
   double height() const;
   double volume() const;
   double area() const;
   void set_height(double heig);
   void set_radius(double rad);
   std::string to_string() const;
   
};


#endif
