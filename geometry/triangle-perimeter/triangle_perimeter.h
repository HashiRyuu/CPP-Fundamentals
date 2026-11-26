/**
    @file triangle_perimeter.h
*/
#ifndef TRIANGLE_PERIMETER_H
#define TRIANGLE_PERIMETER_H

#include "point.h"

struct Triangle{
    Point p1;
    Point p2;
    Point p3;
};


/**
 * Calculates the perimeter of the Triangle t.
 * @param t the Triangle to examine.
 * @return the perimeter.
 */
double perimeter(const Triangle& t);

#endif
