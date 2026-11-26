#include "cone.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

Cone::Cone(double rad, double heig)
   : r(rad), h(heig){}
   

double Cone::radius() const
{
   return r;
}

double Cone::height() const
{
   return h;
}

double Cone::volume() const
{
   return (1.0 / 3) * kPi * r * r * h;
}

double Cone::area() const
{
    return kPi * r * (r + sqrt(h * h + r * r));
}


void Cone::set_height(double heig)
{
   h = heig;
}

void Cone::set_radius(double rad)
{
   r = rad;
}

std::string Cone::to_string() const
{
    std::ostringstream oss;
    oss << "Cone(radius=" << fixed << setprecision(2) << setw(3) 
    << setfill('0') << r << ", height=" << fixed 
    << setprecision(2) << setw(3) << setfill('0') << h << ")";
    return oss.str();
}
