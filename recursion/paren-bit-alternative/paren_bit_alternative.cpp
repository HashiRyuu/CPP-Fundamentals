#include <string>
using std::string;
string parenBit(const string& str)
{
   if(str.at(0) != '('){
      return parenBit(str.substr(1));
   }else{
      if(str.at(str.size() - 1) != ')'){
         return parenBit(str.substr(0, str.size() - 1));
      }else{
         return str;
      }
   }
}

