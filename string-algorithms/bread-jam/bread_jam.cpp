#include <string>
using std::string;

/**
 *  A sandwich is two pieces of bread with something 
 *  in between. Set result to the string that is between 
 *  the first and last appearance of "bread" in the given 
 *  string, or set it to the empty string "" if there are 
 *  not two pieces of bread. 
 */
string bread_jam(const string& str)
{
    string result;
    for(size_t i = 0, len = str.size(); i < len; ++i) {
       if(str.substr(i, 3) == "jam"){
          result += str.substr(i, 3);
       }
    }
    return result;
}
