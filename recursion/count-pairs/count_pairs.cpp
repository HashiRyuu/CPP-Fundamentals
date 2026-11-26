#include <string>
using std::string;
int countPairs(const string& str)
{
       // Base case: if the string is less than 3 characters, it cannot form a pair
    if (str.length() < 3) {
        return 0;
    } else {
        // Check if the first and third characters are the same (forming a pair with the second character)
        int count = (str.at(0) == str.at(2)) ? 1 : 0;

        // Recursively call the function with the remaining substring
        return count + countPairs(str.substr(1));
    }
}

