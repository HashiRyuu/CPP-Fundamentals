#include <string>
#include <vector>
#include <cmath>
using namespace std;

// The structure
struct Car {
    string mfg, model;
    int horsepower, cylinders;
    double mpg;
};

///////////////// WRITE YOUR FUNCTION BELOW THIS LINE ///////////////////////
double bestMileage(const vector<Car>& v, vector<string>& vMileage) {
   
    double totalMileage = 0.0;
    double result;
    string currentManufacturer;
    double maxMileage = 0.0;
    string bestModel;
    double count = 0.0;

    if (v.empty()) {
        // Handle empty input vector
        return result; // Return 0 as no cars in the vector
    }

    for (const Car& car : v) {

        // Check if it's a new manufacturer
        if (car.mfg != currentManufacturer) {
            if (!currentManufacturer.empty()) {
                vMileage.push_back(currentManufacturer + ";" + bestModel);
                totalMileage += maxMileage;
                count++;
            }

            currentManufacturer = car.mfg;
            maxMileage = car.mpg;
            bestModel = car.model;
        } else {
            // If it's the same manufacturer, check if the current car has better mileage
            if (car.mpg > maxMileage) {
                
                maxMileage = car.mpg;
                bestModel = car.model;
                
            }
        }
    }

    // Add the best mileage car from the last manufacturer
    vMileage.push_back(currentManufacturer + ";" + bestModel);
    totalMileage += maxMileage;
    count++;

    // Calculate the average mileage
    result = totalMileage / count;

    return result;
}
