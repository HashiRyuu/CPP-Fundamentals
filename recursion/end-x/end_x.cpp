#include <string>
using std::string;
string endX(const string& str)
{
    if (str.empty()) {
        return "";
    } else {
        if (str[0] == 'x') {
            // Move 'x' to the end
            return endX(str.substr(1)) + 'x';
        } else {
            // Keep the current character and move to the next one
            return str[0] + endX(str.substr(1));
        }
    }
}

