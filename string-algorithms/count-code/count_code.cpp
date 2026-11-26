#include <string>
using std::string;

/**
 *  Set result to the number of times that the 
 *  string "code" appears anywhere in the input 
 *  given string, except we'll accept any letter 
 *  for the 'd', so "cope" and "cooe" count.
 */
int count_code(const string& str)
{
    int result = 0;
     for (size_t i = 0; i < str.length(); ++i) {
        string co = str.substr(i, 4);
        char e = co.back();
        if(co.substr(0, 2) == "co" && e == 'e'){
            result++;
        }
     }
    return result;
}
