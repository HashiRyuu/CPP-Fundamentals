#include <string>
using std::string;

/**
 *  Given as input string and an int N, set result 
 *  a string made of N repetitions of the last N characters 
 *  of the string. You may assume that N is between 0 and 
 *  the length of the string, inclusive. 
 */
string repeat_end(const string& str, int n)
{
   string result = "";
   
   for(int i = n; i > 0; --i){
      result += str.substr(str.size() - n, n);
   }
   return result;
}
