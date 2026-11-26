#include <string>
using std::string;
string pairStar(const string& str)
{
       // Base case: if the string is empty or has only one character, return the original string
    if (str.length() < 2) {
        return str;
    } else {
        // Check if the first two characters are identical
        if (str.at(0) == str.at(1)) {
            // If yes, append the first character, "*", and the second character
            return str.substr(0, 1) + "*" + pairStar(str.substr(1));
        } else {
            // If no, append the current character and recursively call the function with the remaining substring
            return str.substr(0, 1) + pairStar(str.substr(1));
        }
    }
}

