/**
 *  @file postal_barcode.cpp
 */
#include <string>
using namespace std;


#include "postal_barcode.h"

string barCode(int zip) {
     std::string result = ""; // Start with the left frame bar

    // Extract each digit using a loop
    int tempZip = zip;
    while (tempZip > 0) {
        int digit = tempZip % 10;
        result = codeForDigit(digit) + result; // Append the code to the left
        tempZip /= 10;
    }

    // Calculate and append the check digit
    int check = checkDigit(zip);
    result += codeForDigit(check);

    // Add frame bars around the entire code
    result = "|" + result + "|";

    return result;
}

string codeForDigit(int digit) {
    // Hardcoding the barcodes for each digit
    switch (digit) {
        case 0: return "||:::";
        case 1: return ":::||";
        case 2: return "::|:|";
        case 3: return "::||:";
        case 4: return ":|::|";
        case 5: return ":|:|:";
        case 6: return ":||::";
        case 7: return "|:::|";
        case 8: return "|::|:";
        case 9: return "|:|::";
        default: return ""; // Return empty string for non-digit characters
    }
}

int checkDigit(int zip) {
    int sum = 0;

    // Sum all the digits in the zip code
    while (zip > 0) {
        sum += zip % 10;
        zip /= 10;
    }

    // Calculate the check digit (the remainder when the sum is divided by 10)
    int checkDigitValue = (10 - (sum % 10)) % 10;

    return checkDigitValue;
}
