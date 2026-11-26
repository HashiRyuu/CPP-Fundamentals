#include <string>
using std::string;

/**
 *  Given a string, count the number of times that 
 *  the substring consisting of the last two characters
 *  appears elsewhere in the string. If the input is
 *  hixxxhi", then the result is 1, since "hi" appears
 *  one other time in the string. The substrings may
 *  overlap (as example 3 below), but do not count the
 *  ending substring.
 */
int last_two(const string& str)
{
   int result = 0;
   int length = str.length();

    // Check if the string has at least 2 characters
    if (length < 2) {
        return 0;
    }

    // Iterate through the string, excluding the last 2 characters
    for (int i = 0; i < length - 2; ++i) {
        // Check if the substring of length 2 matches the last 2 characters
        if (str.substr(i, 2) == str.substr(length - 2, 2)) {
            result++;
        }
    }

   return result;
}
