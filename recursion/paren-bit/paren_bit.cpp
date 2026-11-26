#include <string>
using std::string;
string parenBit(const string& str)
{
    static bool check = false;  // Use a static variable to maintain the state across recursive calls

    if (str.empty()) {
        return "";
    } else {
        // Check if the current character is '('
        if (str.at(0) == '(') {
            check = true;
        }else if(str.at(0) == ')'){
           check = false;
           return str.at(0) + parenBit(str.substr(1));
        }

        // If inside parentheses, include the character in the result
        if (check) {
            return str.at(0) + parenBit(str.substr(1));
        }

        // If outside parentheses, move to the next character
        return parenBit(str.substr(1));
    }
}

