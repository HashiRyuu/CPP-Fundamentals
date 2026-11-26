/**
 *  @file point_geometry.cpp
 */
#include <string>
#include <cmath>
using namespace std;


#include "point_geometry.h"
/**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 * @return the stream after it has read the Point
 */
istream& read(std::istream& in, Point& p){
    char comma;
    in >> p.x >> comma >> p.y;
    return in;
}

/**
 * Displays a Point in the form (x, y).
 * @param out the stream to write to
 * @param p the Point to write
 * @return the stream after it has written the Point
 */
ostream& write(std::ostream& out, const Point& p){

    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */
double distanceBetween(const Point& a, const Point& b){
    double distancepoint = sqrt(pow(b.y - a.y, 2) + pow(b.x - a.x, 2));
    return distancepoint;
}

/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b){
    Point mid;
    mid.x = (b.x + a.x) / 2;
    mid.y = (b.y + a.y) / 2;
    return mid;
}

// Usage example
#include <sstream>
int run_example()
{

    // istringstream in("3, 4");
    // Point p1;
    // if (read(in, p1)
    //   write(cout, p1) << endl;
    return 0;
}
