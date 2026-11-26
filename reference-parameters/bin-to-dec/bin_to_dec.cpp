   // Write your function here
#include <string>
#include <cmath>
using namespace std;
int binToDec(int& a){
    int result = a;
    int result2 = a;
    int decimal = 0;
    int base = 1; // Represents the base of 2^0 initially

    while (result2 > 0) {
        int lastDigit = result2 % 10;
        decimal += lastDigit * base;
        result2 /= 10;
        base *= 2; // Move to the next power of 2
    }
    a = decimal;
    return result;

}



