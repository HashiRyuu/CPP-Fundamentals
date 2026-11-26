#include <string>
using std::string;
string changeXY(const string& str)
{
       string i;  
    if (str.empty()) {
        return "";
    } else {
        
       if(str.at(0) == 'x'){
          i += string(1, 'y');
       }else{
          i += string(1, str.at(0));
       } 
        return i + changeXY(str.substr(1)); 
    }
}

