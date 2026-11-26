   // Write your function here
#include <iostream>

int digitRange(int number, int& range) {
   
   int original = number;
   
    if (number < 0) {
        range = -1; // Invalid range
        return number;
    }

    // Initialize the range to 1 for a single-digit number
    range = 1;

    // Initialize variables to track the largest and smallest digits
    int largestDigit = number % 10;
    int smallestDigit = number % 10;

    // Remove the last digit and update largest/smallest accordingly
    while (number > 0) {
        int digit = number % 10;
        largestDigit = std::max(largestDigit, digit);
        smallestDigit = std::min(smallestDigit, digit);
        number /= 10;
    }

    // Calculate the range
    range = largestDigit - smallestDigit + 1;

    return original;
}


