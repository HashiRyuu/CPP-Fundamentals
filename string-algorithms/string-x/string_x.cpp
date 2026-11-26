#include <string>
using std::string;

/**
 *  Given a string, set result to a version 
 *  where all the "x" have been removed. Except an 
 *  "x" at the very start or end should not be removed.  
 */
string string_x(const string& str)
{
    string result;
    for (size_t i = 0, len = str.size(); i < len; ++i) {
        //if x at 0 include same x at last
        //so whatever i at 0 or last index is x or not still included
        if (str[i] != 'x' || (i == 0 || i == len - 1)) {
            result += str[i];
        }
    }
    return result;
}
