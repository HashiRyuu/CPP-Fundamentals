#include <string>
using std::string;

/**
 *  Given two input strings, A and B, create a bigger 
 *  string made of the first char of A, the first char of B, 
 *  the second char of A, the second char of B, and so on. 
 *  Any leftover chars go at the end of the result. 
 */
string mix_string(const string& a, const string& b)
{
   string result;
    size_t i = 0, j = 0;

    while (i < a.size() || j < b.size()) {
        if (i < a.size()) {
            result += a[i];
            ++i;
        }
        if (j < b.size()) {
            result += b[j];
            ++j;
        }
    }
   return result;
}
