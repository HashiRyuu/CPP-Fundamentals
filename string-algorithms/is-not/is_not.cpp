#include <string>
using std::string;

/**
 *  Given an input string, set result to a string where 
 *  every appearance of the lowercase word "is" has been 
 *  replaced with "is not". The word "is" should not be 
 *  immediately preceded or followed by a letter -- so 
 *  for example the "is" in "this" does not count.
 * 
 *  Do not use any string functions except for substr(), 
 *  at(), and size(). You may, however, use the <cctype>
 *  classification functions, such as isdigit() and isalpha().
 */
string is_not(const string& s)
{
   string result = "";

   
    for (size_t i = 0, len = s.size(); i < len; ++i) {
        // Check if current character is 'i' and next character is 's'
        if (s[i] == 'i' && s[i + 1] == 's') {
           
            // Check if 'i' is not preceded by a letter and 's' is not followed by a letter
            if (!isalpha(s[i - 1]) && !isalpha(s[i + 2])) {
                // Replace "is" with "is not"
                result += "is not";
                
                i++; // Skip the 's' as it's already handled
            }else {
            result += s[i]; // Copy other characters as is
        } 
            
        } else {
            result += s[i]; // Copy other characters as is
        }
    }

   return result;
}
