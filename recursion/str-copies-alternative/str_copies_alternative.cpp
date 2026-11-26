#include <string>
using std::string;
bool strCopies(const string& str, const string& sub, int n)
{
    // Base case: if n is 0, all required copies are found
    if (n == 0) {
        return true;
    }

    // Base case: if the string is smaller than the substring, not enough copies can exist
    if (str.length() < sub.length()) {
        return false;
    }

    // Check if the substring matches the start of the string
    if (str.substr(0, sub.length()) == sub) {
        // Recursively call with the substring removed from the start and decrease n
        return strCopies(str.substr(1), sub, n - 1);
    } else {
        // If the substring does not match the start, recursively call itself with the first character removed
        return strCopies(str.substr(1), sub, n);
    }
}

