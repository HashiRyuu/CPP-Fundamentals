#include <string>
#include <iostream>
using namespace std;

/**
 *  Set result to a version of the given string, 
 *  where for every star (*) in the input string the 
 *  star and the chars immediately to its left and right 
 *  are gone. So "ab*cd" yields "ad" and "ab**cd" also 
 *  yields "ad".
 *
 */
string star_out(const string& str)
{
    string result;
   for(size_t i = 0, len = str.size(); i < len;  ++i){

    if (str.substr(i, 2).front() == '*' || str.substr(i, 2).back() == '*' ) {
               i+=2;
               
    }else {
           
     //important becasue this check two **
     if(i > 0){
        if(str.substr(i - 1, 2).front() == '*' || str.substr(i - 1, 2).back() == '*' ){
           ++i;
        }
     } 
     
      result += str[i];
      
     }
        
   }
    return result;
}
