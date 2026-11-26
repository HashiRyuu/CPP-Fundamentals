#include <iostream>
#include <string>
using namespace std;

int rfindAny(const char * s1, const char * s2)
{
    int result = -1;
    int index = 0; // Variable to store the index of the matched character
    
    // Move to the end of s1
    char check = s1[0];
    while(*s1 != '\0')
    {
       s1++;
       index++;
    } 
   
    // Move back to the last character of s1 and update the index    
    s1--;
    index--;
    
    while(*s1 != check)
    {
        const char * p2 = s2;
        
        // Check if the current character in s1 matches any character in s2
        while(*p2 != '\0' && *s1 != *p2)
        {
            p2++;
        }
        
        // If a match is found, return the index of the matched character
        if(*p2 != '\0')
        {
            result = index;
            break;
        }
        
        // Go to the previous character in s1 and decrement the index
        s1--;
        index--;
    }
    return result;
}


int main() 
{
    const char* s = "This is a test.";
    cout << rfindAny(s, "aeiou") << ", expect 11, last vowel" << endl;
    cout << rfindAny(s, " \t\n\r") << ", expect 9, last whitespace" << endl;
    cout << rfindAny(s, "Bob") << ", expect -1. None found" << endl;
    
    return 0;
}
