#include <string>
using std::string;
string noX(const string& str)
{
    string i;  
    if (str.empty()) {
        return "";
    } else {
        
       if(str.at(0) == 'x'){
          return noX(str.substr(1));
       }else{
          i += string(1, str.at(0));
       } 
        return i + noX(str.substr(1)); 
    }
}

