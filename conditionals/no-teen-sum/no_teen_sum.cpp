#include <string>
using std::string;

/**
 *  Given 3 int values, a b c, set result to their sum. 
 *  However, if any of the values is a teen-in the range 
 *  13..19 inclusive- then that value counts as 0, 
 *  except 15 and 16 do not count as a teens. 
 *  You may write a separate helper function if you like. 
 *  Define the helper above the problem function. 
 */
void check(int& a, int& b, int& c){
if(a >= 13 && a <= 19){
   if(!(a == 15 || a == 16)){ 
         a = 0;
      }
}
   if(b >= 13 && b <= 19){
   if(!(b == 15 || b == 16)){
      b = 0;
    }
   }
   if(c >= 13 && c <= 19){
   if(!(c == 15 || c == 16)){
      c = 0;
   }
  }
}
int no_teen_sum(int a, int b, int c)
{
    int result;
    check(a, b, c);
    
    result = a + b + c;
    
 
    return result;
}
