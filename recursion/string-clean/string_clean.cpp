#include <string>
using std::string;
string stringClean(const string& str)
{
   string i;
       if (str.size() < 2) {
        return str;
    } else {
       if(str.at(0) == str.at(1)){
          return stringClean(str.substr(1));
       }
       
       return str.at(0) + stringClean(str.substr(1));
       
    }
}

