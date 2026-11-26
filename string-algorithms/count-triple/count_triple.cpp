#include <string>
using std::string;

/**
 *  Complete the function tripleThreat.
 *  We'll say that a "triple" in a string is a char 
 *  appearing three times in a row. Set result to the 
 *  number of triples in the given string. The triples 
 *  may overlap. 
 */
int count_triple(const string& str)
{
   int result = 0;

   
   
    // Iterate through the string up to the third-to-last character
    for (size_t i = 0, len = str.size(); i < len - 2; ++i) {
       // Get the current character
        char current_char = str[i];
        
       //check if the string length is more than 2
      if(str.size() > 2){
         // Check if the current character is repeated three times in a row
        if (current_char == str[i + 1] && current_char == str[i + 2]) {
           // If true, increment the triple count
            result++;
        }
      }
      
      //if string length not greater than 2 than escape the loop
      else{
         break;
      }
    }
   return result;
}
