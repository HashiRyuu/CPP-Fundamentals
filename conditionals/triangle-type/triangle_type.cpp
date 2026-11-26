#include <string>
using std::string;

/**
 *  Given three integers (a, b and c) representing 
 *  the lengths of the sides of a triangle, return
 *  what type of triangle it is. The three types 
 *  are equilateral, isosceles, and scalene. 
 *     An equilateral triangle has all three sides the same length
 *     An isosceles triangle has two sides the same length
 *     A scalene triangle has three sides of different lengths.
 */
string triangle_type(int a, int b, int c)
{
   string result;

   if(a == b && b == c && c == b){
      result = "equilateral";
   } else if(a == b || b == a || c == a || c == b || b == c){
      result = "isosceles";
   } else{
      result = "scalene";
   }
   return result;
}
