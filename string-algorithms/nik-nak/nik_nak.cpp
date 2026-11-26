#include <string>
using std::string;

/**
 *  Look for patterns like "nik" and "nak" in 
 *  the input string-in other words a substring, 
 *  length-3, starting with 'n' and ending with 'k'. 
 *  Set result to a string where for all such words, 
 *  the middle letter is gone, so "nikXnak" yields "nkXnk"
 */
string nik_nak(const string& str)
{
    string result;
    for(size_t i = 0, len = str.size(); i < len; ++i) {
        if (i + 2 < len && str[i] == 'n' && str[i + 2] == 'k') {
            // Skip the middle letter
            result += str[i];
            result += str[i + 2];
            i += 2;
        } else {
            result += str[i];
        }
    }
    return result;
}
