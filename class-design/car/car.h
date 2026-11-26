#ifndef CLASS_DESIGN_CAR_CAR_H
#define CLASS_DESIGN_CAR_CAR_H

#include <string>
class Car
{
  double gas;
  int mpg;
public:
   Car();
   explicit Car(int m);
   Car(int m, double g);
   double getGas() const;
   void addGas(double g);
   void drive(int m);
   int getMpg() const;
   std::string toString() const;
};

#endif
