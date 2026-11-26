/**
 *  @file roman_numerals.cpp
 */
#include <string>
using namespace std;


#include "roman_numerals.h"


/**
 * Converts an integer to its equivalent Roman digit.
 * @param n value of this digit
 * @param ones Roman symbol for ones
 * @param fives Roman symbol for ones
 * @param tens Roman symbol for tens
 * @return the Roman digit as a string.
 */
string digit(int n, const string& symbols){
    string result;
    if (n <= 3) {
        result = string(n, symbols[0]); // Repeat the symbol for ones
    } else if (n == 4) {
        result = symbols.substr(0, 2); // Use the symbol for 1 and the symbol for 5
    } else if (n <= 8) {
        result = symbols[1] + string(n - 5, symbols[0]); // Use the symbol for 5 and repeat the symbol for ones
    } else {
        result = symbols.substr(0, 1) + symbols.substr(2, 1); // Use the symbol for 1 and the symbol for 10
    }

    return result;
}

/**
 * Converts an Arabic number to its Roman equivalent.
 * @param n the number to convert.
 * @return a string reprenting the Roman numeral.
 *
 * @pre the number must be a positive number in range.
 * @post if the number cannot be converted it return an error message
 */
std::string toRoman(int n){
    if (n <= 0 || n > 3999) {
        return "OUT OF RANGE";
    }

    std::string result;

    // Extract digits from thousands to ones
    int thousand = n / 1000;
    int hundred = (n % 1000) / 100;
    int ten = (n % 100) / 10;
    int one = n % 10;

    // Add thousands
    result += string(thousand, 'M');

    // Add hundreds
    result += hundreds(hundred);

    // Add tens
    result += tens(ten);

    // Add ones
    result += ones(one);

    return result;
}

// Usage example
#include <iostream>
int run_example()
{

	// cout << digit(5, "IVX") << endl; // V
	// cout << digit(3, "XLC") << endl; // XXX
    return 0;
}
