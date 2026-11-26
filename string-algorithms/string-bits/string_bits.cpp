#include <string>
using std::string;

/**
 *  Given a string, set result to a new string 
 *  made of every other char starting with the 
 *  first, so "Hello" yields "Hlo". 
 */
string string_bits(const string& str)
{
    string result;
   for (size_t i = 0; i < str.length(); i += 2) {
        result += str[i];
    }
    return result;
}
