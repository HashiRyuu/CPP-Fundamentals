#include <string>
using namespace std;
/**
 *  Given an input string str, if the string starts 
 *  with "f" (either upper or lowercase), return "Fizz". 
 *  If the string ends with "b" (either upper or lowercase), 
 *  return "Buzz". If both the "f" and "b" conditions are true, 
 *  return "FizzBuzz". In all other cases, return the string 
 *  unchanged.
 */
string fizz_string(const string& str)
{
    string result;
    if(str.find("f") != string::npos && str.rfind("b") != string::npos ){
       
       result = "FizzBuzz";
    } else if(str.rfind("b") != string::npos){
       result = "Buzz";
    } else if(str.find("f") != string::npos){
      result = "Fizz";
       
    } else {
       result = str;
    }
    return result;
}
