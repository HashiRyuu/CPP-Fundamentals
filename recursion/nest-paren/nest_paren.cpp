#include <string>
using std::string;
bool nestParen(const string& str)
{
    if (str.empty()) {
        return true;
    } else {
        // Check if the first character is not '(' or ')'
        if (str.at(0) != '(' && str.at(0) != ')') {
            return false;
        }
        
        // Check if the last character is not '(' or ')'
        if (str.at(str.length() - 1) != '(' && str.at(str.length() - 1) != ')') {
            return false;
        }

        // Recur on what's inside the first and last characters
        return nestParen(str.substr(1, str.length() - 2));
    }
}

