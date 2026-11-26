#include <string>
using std::string;
bool strCopies(const string& str, const string& sub, int n)
{
   if(str.empty()){
   return false;
   }else{
      static int count = 0;
       count += (str.substr(0, sub.size()) == sub)? 1 : 0;
      if(count == n){
         return true;
      }
      
      return strCopies(str.substr(1), sub, n);
   }
}

