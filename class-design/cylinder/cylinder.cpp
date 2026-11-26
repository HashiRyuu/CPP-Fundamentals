#include "cylinder.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

Cylinder::Cylinder(double rad, double heig)
   : r(rad), h(heig){}
   

double Cylinder::radius() const
{
   return r;
}

double Cylinder::height() const
{
   return h;
}

double Cylinder::volume() const
{
   return kPi * r * r * h;
}

double Cylinder::area() const
{
    return (2 * kPi * r * r) + (2 * kPi * r * h);
}


void Cylinder::set_height(double heig)
{
   h = heig;
}

void Cylinder::set_radius(double rad)
{
   r = rad;
}


void Cylinder::swap()
{
   double temp = r;
   r = h;
   h = temp;
}

std::string Cylinder::to_string() const
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << "Cylinder(radius=" 
    << r << ", height=" << h << ")";
    return oss.str();
}
