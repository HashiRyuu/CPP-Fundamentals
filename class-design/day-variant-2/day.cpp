#include "day.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
using namespace std;

Day::Day() : day(1){}

Day::Day(string d)
{
   if(d == "Sunday") throw std::invalid_argument("Invalid day.");
   
    for (char &c : d)
        c = tolower(c);

    if (d == "monday")
        day = 1;
    else if (d == "tuesday")
        day = 2;
    else if (d == "wednesday")
        day = 3;
    else if (d == "thursday")
        day = 4;
    else if (d == "friday")
        day = 5;
    else if (d == "saturday")
        day = 6;
    else if (d == "sunday")
        day = 7;
    else
    {
        string first = d.substr(0, 3);
        if (first == "mon")
            day = 1;
        else if (first == "tue")
            day = 2;
        else if (first == "wed")
            day = 3;
        else if (first == "thu")
            day = 4;
        else if (first == "fri")
            day = 5;
        else if (first == "sat")
            day = 6;
        else if (first == "sun")
            day = 7;
        else throw std::invalid_argument("Invalid day.");
    }
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
