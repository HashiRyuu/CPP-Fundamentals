#include <string>
using std::string;

/**
 *  Given as input two strings, word and a separator, 
 *  set result to a big string made of count occurrences 
 *  of the word, separated by the separator string. 
 */
string repeat_separator(const string& word, const string& separator, int count)
{
    string result;
  for(int i = 0; i < count; ++i){
     result += word;
     if (i < count - 1) {
            result += separator;
        }
  } 
    return result;
}
