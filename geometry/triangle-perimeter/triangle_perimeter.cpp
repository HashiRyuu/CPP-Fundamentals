/**
 *  @file triangle_perimeter.cpp
 */
#include <string>
#include <cmath>
using namespace std;


#include "triangle_perimeter.h"

double perimeter(const Triangle& t){
    double side1 = distanceBetween(t.p1, t.p2);
    double side2 = distanceBetween(t.p2, t.p3);
    double side3 = distanceBetween(t.p3, t.p1);
    return side1 + side2 + side3;
}
