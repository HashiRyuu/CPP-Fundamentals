#include <string>
using std::string;

/**
 *  Given a non-empty string like "Code" 
 *  set result to a string like "CCoCodCode".  
 */
string string_splosion(const string& str)
{
    string result;
   for(size_t i = 1, len = str.size(); i <= len; ++i){
      result += str.substr(0, i);
   }
    return result;
}
