#include "point3d.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

Point3D::Point3D(double x, double y, double z)
    : px(x), py(y), pz(z) {}
    
Point3D::Point3D() : px(0), py(0), pz(0){}

double Point3D::x() const
{
    return px;
}

double Point3D::y() const
{
    return py;
}

double Point3D::z() const
{
    return pz;
}

double Point3D::magnitude() const
{
   return sqrt(px * px + py * py + pz * pz);
}


void Point3D::normalize()
{
    double mag = sqrt(px * px + py * py + pz * pz);
    px /= mag;
    py /= mag;
    pz /= mag;
}



std::string Point3D::to_string() const
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << "Point3D(" 
    << px << ", " << py << ", " << pz << ")";
    return oss.str();
}
