/**
    @file recursive_strings.cpp
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "recursive_strings.h"


/**
    Recursively searches a string to find a second string.
    @param s the string to search through.
    @param t the string to search for
    @return true if t is found in s.

    Tests whether the string t is contained in a string s.
    For instance, calling the function like this:
        bool b = find("Mississippi", "sip");
    returns true, since "sip" is contained in "Mississippi".
    You must write this as a recursive function, not by just
    calling the string::find() function, or by using a loop.
*/
bool find(const string& s, const string& t){
    // Base case: if s is smaller than t or s is empty, t cannot be found
    if (s.size() < t.size() || s.empty()) {
        return false;
    }

    bool found = false;
    // Base case: if s starts with t, return 0
    if (s.substr(0, t.size()) == t) {
        return true;
    }else{
         return found = find(s.substr(1), t);
    }

}

/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/
string stringClean(const string& str){
    if (str.empty()) {
        return "";
    } else {
        char temp = str[1];
        if (str[0] == temp) {
            // Skip the same character
            return stringClean(str.substr(1));
        } else {
            // Keep the current character and move to the next one
            return str[0] + stringClean(str.substr(1));
        }
    }
}
