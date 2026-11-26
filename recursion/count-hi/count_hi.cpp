#include <string>
using std::string;
int countHi(const string& str)
{
      
   
    if (str.empty()) {
        return 0;
    } else {
        
        int count = (str.at(0) == 'h' && str.at(1) == 'i') ? 1 : 0;
        return count + countHi(str.substr(1)); 
    }
}

