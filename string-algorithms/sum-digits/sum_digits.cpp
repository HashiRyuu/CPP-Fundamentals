#include <string>
#include <cctype>
using namespace std;

/**
 *  Given a string, set result to the sum of 
 *  the digits 0-9 that appear in the string, 
 *  ignoring all other characters. Return 0 if 
 *  there are no digits in the string. 
 */
int sum_digits(const string& str)
{
    int result = 0;
    for (char ch : str) {
        // Check if the character is a digit (0-9)
        if (isdigit(ch)) {
            // Convert the character to its numeric value and add it to the result
            result += ch - '0';
        }
    }
    return result;
}
