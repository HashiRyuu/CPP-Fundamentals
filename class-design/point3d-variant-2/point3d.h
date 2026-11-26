#ifndef CLASS_DESIGN_POINT3D_VARIANT_2_POINT3D_H
#define CLASS_DESIGN_POINT3D_VARIANT_2_POINT3D_H

#include <string>
class Point3D
{
    double px, py, pz;

public:
    Point3D();
    Point3D(double x, double y, double z);
    double x() const;
    double y() const;
    double z() const;
    double magnitude() const;
    void normalize();
    std::string to_string() const;
};

#endif
