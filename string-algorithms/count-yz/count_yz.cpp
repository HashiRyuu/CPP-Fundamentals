#include <string>
using std::string;

/**
 *  Given an input string, count the number of words ending 
 *  in 'y' or 'z' -so the 'y' in "heavy" and the 'z' in "fez" 
 *  count, but not the 'y' in "yellow". Make sure that your 
 *  comparison is not case sensitive. We'll say that a y 
 *  or z is at the end of a word if there is not an alphabetic 
 *  letter immediately following it. 
 *
 *  Do not use any string functions except for substr(), 
 *  at(), and size(), and isalpha() from <cctype>.
 *
 */
int count_yz(const string& str)
{
   int result = 0;
for(size_t i = 1, len = str.size(); i < len; ++i){
   char a = str[i];
   
   //check behind the char not in alphabet
   if((!isalpha(a) && str.at(i - 1) == 'y') || (!isalpha(a) && str.at(i - 1) == 'z')){
      result++;
   }
}
   
   //check behind of the string
   if(str.at(str.size() - 1) == 'y' || str.at(str.size() - 1) == 'z'){
      result++;
   }
   
   
   return result;
}
