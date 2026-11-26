/*
 *  shape_inheritance.h
 *  Point->Circle->Cylinder
 */

#ifndef SHAPE_INHERITANCE_H
#define SHAPE_INHERITANCE_H

#include "point.h"
#include <cmath>
#include <string>

// Use this for PI
const double kPi = std::acos(-1.0);

// Put Circle first, then Cylinder
class Circle : public Point
{
    double radius;

public:

    Circle(double r, double x, double y);
    double getRadius() const;
    virtual double getArea() const;
    double getCircumference() const;
    std::string toString(int decimals) const override;
};


class Cylinder : public Circle
{
    double height;

public:
    Cylinder(double h, double r, double x, double y);
    double getHeight() const;
    double getVolume() const;
    double getArea() const override;
    std::string toString(int decimals) const override;

};


#endif
