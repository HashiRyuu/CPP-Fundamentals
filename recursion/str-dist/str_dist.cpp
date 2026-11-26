#include <string>
using std::string;
int strDist(const string& str, const string& sub)
{
    // Base case: if the string is smaller than the substring, return 0
    if (str.length() < sub.length()) {
        return 0;
    }

    // Check if the substring matches the start of the string
    if (str.substr(0, sub.length()) == sub) {
        // Check if the substring also matches the end of the string
        if (str.substr(str.length() - sub.length(), sub.length()) == sub) {
            // If both conditions are true, return the length of the whole string
            return str.length();
        } else {
            // If only the start matches, recursively call with the substring removed from the end
            return strDist(str.substr(0, str.length() - 1), sub);
        }
    } else {
        // If the substring does not match the start, recursively call with the first character removed
        return strDist(str.substr(1), sub);
    }
}

