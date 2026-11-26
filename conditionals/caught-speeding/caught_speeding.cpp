#include <string>
using std::string;

/**
 *  You are driving a little too fast, and a police 
 *  officer stops you. Write code to compute the result, 
 *  encoded as an int value: 0=no ticket, 25=small ticket, 
 *  275=big ticket. If speed is 60 or less, there is 
 *  no ticket. If speed is between 61 and 80 inclusive, 
 *  the result is a small ticket. If speed is 81 or more, 
 *  the result is a large ticket. Unless it is your birthday--
 *  on that day, your speed can be 5 higher in all cases. 
 */
int caught_speeding(int speed, bool is_birthday)
{
   int result;
if(!(is_birthday)){
   if(speed <= 60){
      result = 0;
   }  if(speed >= 61 && speed <= 80){
      result = 25;
   } if(speed > 80)
      result = 275;
} else {
   int speed2 = speed - 5;
   if(speed2 <= 60){
      result = 0;
   }  if(speed2 >= 61 && speed2 <= 80){
      result = 25;
   } if(speed > 80)
      result = 275;
}
   return result;
}
