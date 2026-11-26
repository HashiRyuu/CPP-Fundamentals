#include <string>
using namespace std;

/**
 *  Given a string, return the longest 
 *  substring that appears at both the beginning 
 *  and end of the string without overlapping. For 
 *  example, given the input "abXab", return "ab".
 *  Do not use any string functions except for substr(), 
 *  at(), [], and size().
 */
string same_ends(const string& str)
{
    string result = "";
       // Iterate from the beginning of the string
    for (size_t i = 0, len = str.size(); i < len / 2; ++i) {
        string substr = str.substr(0, i + 1);

        // Check if the current substring is found at the end of the string
        if (substr == str.substr(len - i - 1, i + 1)) {
            result = substr;  // Update result if a match is found
        }
    }
    return result;
}
