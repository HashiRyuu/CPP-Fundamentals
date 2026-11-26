#include <string>
using std::string;

/**
 *  Given a string, look for a mirror image (backwards) 
 *  string at both the beginning and end of the given 
 *  string. In other words, zero or more characters at the 
 *  very beginning of the given string, and at the very end 
 *  of the string in reverse order (possibly overlapping). 
 *  For example, the string "abXYZba" has the mirror end "ab".
 */
string mirror_ends(const string& str)
{
   string result;
       // Iterate from the beginning and end of the string simultaneously
    for (size_t i = 0, j = str.size() - 1; i < str.size() && j >= 0; ++i, --j) {
        // Check for a mirror image at the beginning and end
        if (str[i] == str[j]) {
            result += str[i];  // Update result for each matching character
        } else {
            break;  // Break the loop if a mismatch is found
        }
    }
   
   return result;
}
