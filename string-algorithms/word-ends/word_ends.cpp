#include <string>
using std::string;

/**
 *  Given a string and a non-empty word string, 
 *  set result to a string made of each char 
 *  just before and just after every appearance 
 *  of the word in the string. Ignore cases where 
 *  there is no char before or after the word, and 
 *  a char may be included twice if it is between two 
 *  words.
 *
 */
string word_ends(const string& str, const string& word)
{
    string result;
 for(size_t i =0, len = str.size(); i < len; ++i){
    if(str.substr(i, word.size()) == word){
       if(i > 0){
          result += str.at(i - 1);
       }
       
       if(i + word.size() < str.size()){
          result += str.at(i + word.length());
       }
    }
 }
    return result;
}
