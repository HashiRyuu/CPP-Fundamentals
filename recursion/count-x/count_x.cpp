#include <string>
using std::string;
int countX(const string& str)
{
    // Base case: if the string is empty, return 0
    if (str.empty()) {
        return 0;
    } else {
        // Check if the first character is 'x' and recursively count 'x' in the remaining substring
        int count = (str.at(0) == 'x') ? 1 : 0;
        return count + countX(str.substr(1)); // Pass the remaining substring
    }
}

