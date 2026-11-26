#include <string>
using std::string;
string allStar(const string& str)
{
    string i;  
    if (str.size() < 2) {
        return str;
    } else {
        
          i += string(1, str.at(0)) + "*";
          
        return i + allStar(str.substr(1)); 
    }
}

