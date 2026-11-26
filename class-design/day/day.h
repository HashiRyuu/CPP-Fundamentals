#ifndef CLASS_DESIGN_DAY_DAY_H
#define CLASS_DESIGN_DAY_DAY_H

#include <string>
using namespace std;


class Day
{
   int day;
public:
   Day();
   Day(int d);
   int get_day() const;
   std::string to_string() const;
   void set_day(int d);
};



#endif
