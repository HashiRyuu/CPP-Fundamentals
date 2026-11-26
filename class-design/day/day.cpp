#include "day.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
using namespace std;

Day::Day() : day(1){}

Day::Day(int d) : day(d)
{
   if (d < 1 || d >= 7)
        throw std::invalid_argument("Invalid day.");
}

int Day::get_day() const
{
   return day;
}


string Day::to_string() const
{
   switch(day)
   {
      case 1: return "Monday";
      
      case 2: return "Tuesday";
    
      case 3: return "Wednesday";
   
      case 4: return "Thursday";
      
      case 5: return "Friday";
      
      case 6: return "Saturday";
     
      case 7: return "Sunday";
     
      default:
      
       throw std::invalid_argument("Invalid day.");
    
   }
}

void Day::set_day(int d)
{
   if (d < 1 || d >= 7) throw std::invalid_argument("Invalid day.");
   else day = d;
}
