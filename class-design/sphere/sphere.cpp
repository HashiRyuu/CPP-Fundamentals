#include "sphere.h"
#include <string>
using namespace std;

Sphere::Sphere(double rad) : r(rad){}
   

double Sphere::radius() const
{
   return r;
}

double Sphere::volume() const
{
   return (4 / 3.0) * kPi * r * r * r;
}

double Sphere::area() const
{
    return 4 * kPi * r * r;
}

void Sphere::set_radius(double rad)
{
   r = rad;
}


Sphere Sphere::scale(double factor) const
{
   return Sphere(r * factor);
}

std::string Sphere::to_string() const
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << "Sphere(radius=" 
    << r << ")";
    return oss.str();
}
