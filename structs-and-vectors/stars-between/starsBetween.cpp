#include <string>
#include <vector>
#include <cmath>
using namespace std;

// The structure
struct Star {
    double x, y;
    double magnitude;
    int draper;
    string names;
};

///////////////// WRITE YOUR FUNCTION BELOW THIS LINE ///////////////////////
double starsBetween(const vector<Star>& v, vector<string>& names, double lower, double upper)
{
   double result;
   double sum = 0.0, count = 0.0;
   for(const Star& e : v)
   {
        
       if(e.magnitude > lower && e.magnitude < upper)
       {
          sum += e.magnitude;
          names.push_back(e.names);
          count++;
       }
   }
   
   if (count == 0) {
        return -1; // Return -1 if no stars are within the range
    } else {
        result = sum / count; // Calculate the average magnitude
        return result;
    }
}

