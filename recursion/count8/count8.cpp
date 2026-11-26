#include <string>
using std::string;
int count8(int n)
{
    if (n == 0) {
        return 0;
    } else {
        int num = n % 10;
        int prev = (n / 10) % 10;
        int count = (num == 8) ? 1 : 0;
       
         if(num == prev){
            count++;
         }
 
        return count + count8(n / 10);
    }
}

