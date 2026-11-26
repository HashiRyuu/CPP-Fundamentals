#include <string>
#include <vector>
using namespace std;

// The structure
struct Star {
    double x, y;
    double magnitude;
    int draper;
    string names;
};

///////////////// WRITE YOUR FUNCTION BELOW THIS LINE ///////////////////////
vector<int> findStars(const vector<Star>& v, const string& name)
{
   vector<int> result;
   // Iterate through the vector of stars
    for (const Star& star : v) {
       
        // Check if the search string is found in the star's name
        if (star.names.find(name) != std::string::npos) {
           
            // If found, add the Draper number to the result vector
            result.push_back(star.draper);
        }
    }
   return result;
}

