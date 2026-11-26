#include <string>
using std::string;

/**
 *  Given an input string, set result to the length of
 *  the largest "block" in the string. A block is a run
 *  of adjacent chars that are the same.
 *  Do not use any string functions except for substr(),
 *  at(), and size().
 */
int max_run(const string& str)
{
   int result = 0;
      int current_run = 1;  // Initialize the current run length to 1

    // Iterate through the string starting from the second character
    for (size_t i = 1, len = str.size(); i < len; ++i) {
       if(str.size() > 0){
        // Check if the current character is the same as the previous one
        if (str[i] == str[i - 1]) {
            // Increment the current run length if the characters match
            current_run++;
        } else {
            // Update the result if the current run is longer
            if (current_run > result) {
                result = current_run;
            }

            // Reset the current run length for the new block
            current_run = 1;
        }
       }else{
          result = 0;
          break;
       }
    }

    // Update the result with the final run length in case it's the longest
    if (str.size() > 0 && current_run > result) {
        result = current_run;
    }
   return result;
}
