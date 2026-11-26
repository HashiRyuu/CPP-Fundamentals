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
vector<Star> closestDistance(const vector<Star>& v)
{
   vector<Star> result(2);
   //initial two stars first because the if there no other stars are close 
   //the first two stars are close.
   //also be a value to measure.
   double closeDistance = sqrt(pow(v.at(0).x - v.at(1).x, 2) 
                          + pow(v.at(0).y - v.at(1).y, 2));
   result[0] = v[0];
   result[1] = v[1];
   
   //begin to check if the other pairs distance less than 
   //the first two
   for(size_t i = 2; i < v.size() - 1; ++i)
   {
       double dx = v.at(i + 1).x - v.at(i).x;
       double dy = v.at(i + 1).y - v.at(i).y;
       double currentDistance = sqrt(dx * dx + dy * dy);
       if(currentDistance < closeDistance)
       {
          closeDistance = currentDistance;
          result[0] = v[i];
          result[1] = v[i + 1];
       }
   }
   
   return result;
}

