#include <string>
using std::string;

/**
 *  Given 2 strings, a and b, set result to 
 *  the number of the positions where they contain 
 *  the same length 2 substring. So "xxcaazz" and "xxbaaz" 
 *  yields 3, since the "xx", "aa", and "az" substrings 
 *  appear in the same place in both strings.
 */
int string_match(const string& a, const string& b)
{
    int result = 0;
    int len1 = a.size();
    int len2 = b.size();

    // Use the smaller length of the two strings to avoid out-of-bounds access
    int minLength = (len1 < len2) ? len1 : len2;

    for (int i = 0; i < minLength - 1; ++i) {
        if (a.substr(i, 2) == b.substr(i, 2)) {
            result++;
        }
    }
    return result;
}
