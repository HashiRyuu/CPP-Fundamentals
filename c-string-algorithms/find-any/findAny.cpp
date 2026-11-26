#include <iostream>
#include <string>
using namespace std;

int findAny(const char * s1, const char * s2)
{
    int result = -1;
    int index = 0; // Variable to store the index of the matched character
    
    while(*s1 != '\0')
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
        
        // Go to the next character in s1 and increment the index
        s1++;
        index++;
    }
    
    return result;
}

int main() 
{
    const char* s = "This is a test.";
    cout << findAny(s, "aeiou") << ", expect 2, any vowel" << endl;
    cout << findAny(s, " \t\n\r") << ", expect 4, any whitespace" << endl;
    cout << findAny(s, "Bob") << ", expect -1. None found" << endl;
    
    return 0;
}
