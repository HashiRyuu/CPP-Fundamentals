#include <string>
using std::string;

/**
 *  Given as input a day of the week encoded as 0=Sun,
 *  1=Mon, 2=Tue, ...6=Sat, and a boolean indicating if
 *  we are on vacation, set result to a string of the form
 *  "7:00" indicating when the alarm clock should ring.
 *
 *  Weekdays, the alarm should be "7:00" and on the weekend
 *  it should be "10:00". Unless we are on vacation-then on
 *  weekdays it should be "10:00" and weekends it should be "off".
 */
string alarm_clock(int day, bool on_vacation)
{
    string alarm;
    if(on_vacation){
    
       
       switch(day){
          case 1: 
          case 2:
          case 3:
          case 4:
          case 5: alarm = "10:00";
          break;
          default: alarm = "off";
          break;
       }
    } else{
          switch(day){
          case 1: 
          case 2:
          case 3:
          case 4:
          case 5: alarm = "7:00";
          break;
          default: alarm = "10:00";
          break;
       }
    }
    return alarm;
}
