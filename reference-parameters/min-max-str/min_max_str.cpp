#include <string>
using std::string;
   // Write your function here

double minMaxStr(const std::string& input, int& min, int& max) {
    bool firstAlphabeticalChar = true; // Flag to track the first alphabetical character

    // Initialize min and max to the ASCII values of 'z' and 'a' respectively
    min = 'z';
    max = 'a';

    // Iterate through the characters in the input string
    for (char ch : input) {
        if (isalpha(ch)) {
            // Update min and max based on alphabetical characters
            min = std::min(min, static_cast<int>(ch));
            max = std::max(max, static_cast<int>(ch));

            if (firstAlphabeticalChar) {
                firstAlphabeticalChar = false;
            }
        }
    }


    // Calculate and return the real ratio of min to max
    return static_cast<double>(min) / max;
}



