#include <string>
using std::string;
int triangle(int n)
{
   if(n == 0){
      return 0;   
   }else if(n == 1){
      return n;
   }else{
      return n + triangle(n - 1);
   }
}

