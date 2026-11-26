#include <string>
using std::string;
int countHi2(const string& str)
{
    int count = 0;
    if (str.length() < 2) {
        return 0;
    } else {
        string check = str.substr(0, 3);
        count += (check.at(0) != 'x' && check.substr(1, 2) == "hi") ? 1 : 0;

        return count + countHi2(str.substr(1));
    }
}

