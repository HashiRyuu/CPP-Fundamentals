#include <string>
using std::string;
bool nestParen(const string& str)
{
   if(str.empty()){
   return true;
   }else{
   
   if(str.at(0) == '(' || str.at(0) == ')'){
     
      return nestParen(str.substr(1));
   }else{
      return false;
   }
  }
}

