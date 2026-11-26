#include <string>
#include <cctype>
using namespace std;

/**
 *  Given two input strings, base and remove, 
 *  set result to a version of the base string 
 *  where all instances of the remove string have 
 *  been removed. This is not case sensitive. You 
 *  may assume that the remove string is length 
 *  1 or more. Remove only non-overlapping instances, 
 *  so with "xxx" removing "xx" leaves "x". 
 */
string without_string(const string& base, const string& remove)
{
    string result;
   for(size_t i = 0, len = base.size(); i < len; ++i){
      string sub = base.substr(i, remove.size());
      if(sub != remove){
         result += base[i];
      }else{
          i += remove.size() - 1;
      }
   }
    return result;
}
