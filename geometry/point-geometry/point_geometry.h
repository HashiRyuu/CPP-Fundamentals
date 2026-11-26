/**
    @file point_geometry.h
*/
#ifndef POINT_GEOMETRY_H
#define POINT_GEOMETRY_H

#include <vector>
#include <stdexcept>
#include <string>
#include <iostream>
#include <sstream>

struct Point{
    int x = 0;
    int y = 0;
};


/**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 * @return the stream after it has read the Point
 */
istream& read(std::istream& in, Point& p);

/**
 * Displays a Point in the form (x, y).
 * @param out the stream to write to
 * @param p the Point to write
 * @return the stream after it has written the Point
 */
ostream& write(std::ostream& out, const Point& p);

/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */
double distanceBetween(const Point& a, const Point& b);

/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b);

#endif
