#include <string>
using std::string;
int powerN(int n, int exponent)
{
    if (exponent== 0) {
        return 1;
    } else {
       
        return n * powerN(n, exponent - 1);
    }
}

