#include <string>
using std::string;
int bunnyEars(int n)
{
  
    if(n == 0){
      return 0;   
   }else{
      return 2 + bunnyEars(n - 1);
   }
}

