#include <string>
using std::string;

/**
 *  Given 3 int values, a b c, set result to their sum.
 *  However, if one of the values is 13 then it does
 *  not count towards the sum and values to its right do
 *  not count. So for example, if b is 13, then both b and
 *  c do not count.
 */
int lucky_sum(int a, int b, int c)
{
    int result;

    if(a == 13){
       result = c;
    } else if(b == 13){
       result = a;
    } else if (c == 13){
       result = a + b;
    } else {
       result = a + b + c;
    }
    return result;
}
