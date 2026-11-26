#include <string>
using std::string;
string changePi(const string& str)
{
    // Base case: if the string is less than 2 characters, return the original string
    if (str.length() < 2) {
        return str;
    } else {
        // Check if the substring starting at position 0 is "pi"
        if (str.substr(0, 2) == "pi") {
            // If yes, append "3.14" and recursively call the function with the remaining substring
            return "3.14" + changePi(str.substr(2));
        } else {
            // If no, append the current character and recursively call the function with the remaining substring
            return str.substr(0, 1) + changePi(str.substr(1));
        }
    }
}

