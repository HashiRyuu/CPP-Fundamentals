#include <string>
using std::string;
int countAbc(const string& str)
{
   int count = 0;
       if (str.empty()) {
        return 0;
    } else {
        int count = (str.substr(0, 3) == "abc"||str.substr(0, 3) == "aba") ? 1 : 0;
  
         return count + countAbc(str.substr(1));
       
    }
}

