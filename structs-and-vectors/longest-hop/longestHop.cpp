#include <string>
#include <vector>
#include <cmath>
using namespace std;

// The structures
struct Star {
    double x, y;
    double magnitude;
    int draper;
    string names;
};


///////////////// WRITE YOUR FUNCTION BELOW THIS LINE ///////////////////////
vector<Star> longestHop(const vector<Star>& v)
{
   vector<Star> result(2);
   double maxDistance = 0.0;
   for(size_t i = 0; i < v.size() - 1; ++i)
   {
       double dx = v.at(i + 1).x - v.at(i).x;
       double dy = v.at(i + 1).y - v.at(i).y;
       double currentDistance = sqrt(dx * dx + dy * dy);
       if(currentDistance > maxDistance)
       {
          maxDistance = currentDistance;
          result.clear();
          result.push_back(v[i]);
          result.push_back(v[i + 1]);
       }
   }
   
   return result;
}

