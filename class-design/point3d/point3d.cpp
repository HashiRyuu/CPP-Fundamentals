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

double Point3D::distance_from(const Point3D& other) const
{
    double dx = other.px - px;
    double dy = other.py - py;
    double dz = other.pz - pz;

    return sqrt(dx * dx + dy * dy + dz * dz);
}

std::string Point3D::to_string() const
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << "Point3D(" 
    << px << ", " << py << ", " << pz << ")";
    return oss.str();
}
