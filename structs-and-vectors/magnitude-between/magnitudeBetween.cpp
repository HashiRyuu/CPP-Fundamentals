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
vector<int> magnitudeBetween(const vector<Star>& v, double lower, double upper)
{
   vector<int> result;
   for(const Star& e : v)
   {
      if(e.magnitude > lower && e.magnitude < upper) result.push_back(e.draper);
   }
   
   return result;
}

