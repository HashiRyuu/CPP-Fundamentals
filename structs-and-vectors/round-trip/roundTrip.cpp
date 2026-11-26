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
double roundTrip(const std::vector<Star>& v, double& avgMagnitude)
{
    double result = 0.0;
    double totalMagnitude = 0.0;
    
    if(!v.empty())
    {
    for (size_t i = 0; i < v.size() - 1; ++i)
    {
        double dx = v.at(i + 1).x - v.at(i).x;
        double dy = v.at(i + 1).y - v.at(i).y;
        double distance = sqrt(dx * dx + dy * dy);
        result += distance;
        totalMagnitude += v.at(i).magnitude;
    }
    
    // Add distance from the last star to the first
    double dx = v.front().x - v.back().x;
    double dy = v.front().y - v.back().y;
    result += sqrt(dx * dx + dy * dy);
    totalMagnitude += v.back().magnitude;

    // Calculate average magnitude
    avgMagnitude = totalMagnitude / v.size();
    
    }else
    {
      result = 0;
      avgMagnitude = 0;
    }
    
    return result;
}
