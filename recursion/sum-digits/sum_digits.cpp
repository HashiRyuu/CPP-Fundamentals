#include <string>
using std::string;
int sumDigits(int n)
{
   int num = n % 10;
   if(n == 0){
      return 0;
   }else{
      return num + sumDigits(n / 10);
   }
}

