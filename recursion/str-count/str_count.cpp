#include <string>
using std::string;
int strCount(const string& str, const string& sub)
{
   if(str.empty()){
   return 0;
   }else{
      int count = (str.substr(0, sub.size()) == sub)? 1 : 0;
      
      return count + strCount(str.substr(1), sub);
   }
}

