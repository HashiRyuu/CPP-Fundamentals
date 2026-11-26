   // Write your function here
#include <iostream>

int minMaxDigit(int number, int& low, int& high) {
   
   int original = number;


    // Initialize variables to track the largest and smallest digits
    high = number % 10;
    low = number % 10;

    // Remove the last digit and update largest/smallest accordingly
    while (number > 0) {
        int digit = number % 10;
        high = std::max(high, digit);
        low = std::min(low, digit);
        number /= 10;
    }


    return original;
}

