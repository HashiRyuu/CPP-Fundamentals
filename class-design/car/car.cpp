#include "car.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

Car::Car(int m, double g)
   : mpg(m), gas(g){}
   
Car::Car() : mpg(0), gas(0){}

Car::Car(int m) : mpg(m){}

double Car::getGas() const
{
   return gas;
}

int Car::getMpg() const
{
   return mpg;
}

void Car::addGas(double g)
{
   gas += g;
}

void Car::drive(int m)
{
   gas -= m / mpg;
}



std::string Car::toString() const
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << "Car(mpg->" << (double)mpg << ", "
    << "fuel->" << gas << ")";
    return oss.str();
}
