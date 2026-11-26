#include <string>
using std::string;

/**
 *  Suppose the string "yak" is unlucky. Given a string, 
 *  set result to a version where all the "yak" are removed, 
 *  but the "a" can be any char. The "yak" strings will not overlap.
 */
string string_yak(const string& str)
{
    string result;
for(size_t i = 0, len = str.size(); i < len; ++i){
   string check = str.substr(i, 3);
   if(check == "yak"){
      i += 2;
   }else{
      result += check;
      i += 2;
   }
}
    return result;
}
