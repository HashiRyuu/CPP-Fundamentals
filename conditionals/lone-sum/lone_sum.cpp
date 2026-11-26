#include <string>
using std::string;
/**
 *  Given 3 int values, a b c, set result to their sum. 
 *  However, if one of the values is the same as another 
 *  of the values, it does not count towards the sum. 
 */
int lone_sum(int a, int b, int c)
{
    int result;
  if(a == b && c == b && b == c){
     result = 0;
     } else if(a == b || a == c){
     if(a == b){
     result = c;}
     else {
        result = b;
     }
  } else if(b == a || b == c){
     if(b == a){
     result = c;}
     else {
        result = a;
     }
  } else if(c == a || c == b){
     if(c == a){
     result = b;}
     else {
        result = a;
     } 
  } else{
     result = a + b +c;
  }
    return result;
}
