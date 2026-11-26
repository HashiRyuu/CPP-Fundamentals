#include <string>
using std::string;

/**
 *  Given 3 ints, a b c, set result to the sum of their 
 *  "rounded" values. For this problem, we'll round an 
 *  int value up to the next multiple of 10 if its rightmost 
 *  digit is 5 or more, so 15 rounds up to 20. Alternately, 
 *  round down to the previous multiple of 10 if its rightmost 
 *  digit is less than 5, so 12 rounds down to 10. 
 *  To avoid code repetition, you may write a separate helper 
 *  function but that is not required. Define the helper before calling it. 
 */
 void check(int& a, int& b, int& c){

    if(a % 10 >= 5){
       a = 20;
    } else {
       a = 10;
    }
   
   
    if(b % 10 >= 5){
       b = 20;
    } else {
       b = 10;
    }
   
    
   
    if(c % 10 >= 5){
       c = 20;
    }else {
       c = 10;
    }
   
   
 }

int round_sum(int a, int b, int c)
{
   int result;

   if(a < 10 && b < 10 && c << 10){
      int l = a + b + c;
      if(l % 10 >= 5){
         result = 20;
      } else{
         result = 10;
      }
   } else{
   check(a, b, c);
   result = a + b + c;
   }
   
   
   
   return result;
}
