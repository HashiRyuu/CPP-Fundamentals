#include <string>
using std::string;
int count11(const string& str)
{
    int count = 0;
    if (str.empty()) {
        return 0;
    } else {
        int count = (str.substr(0, 2) == "11") ? 1 : 0;
        if(str.substr(0, 2) == "11"){
        return count + count11(str.substr(2));}
        return count + count11(str.substr(1));
    }
}

