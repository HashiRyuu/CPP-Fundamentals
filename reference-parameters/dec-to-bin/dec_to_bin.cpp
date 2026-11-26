#include <string>
#include <cmath>
using namespace std;
int decToBin(int& a){
    int result = a;
    int result2 = a;
    int decimal = 0;
    int base = 1; // Represents the base of 2^0 initially

    while (result2 > 0) {
        int lastDigit = result2 % 2;
        decimal += lastDigit * base;
        result2 /= 2;
        base *= 10; // Move to the next power of 2
    }
    a = decimal;
    return result;

}
