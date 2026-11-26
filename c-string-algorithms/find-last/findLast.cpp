#include <iostream>
#include <string>
using namespace std;

const char* findLast(const char * s1, const char * s2)
{
    const char * result = nullptr;
    int s1len = 0;
    
    // Calculate the length of s1
    const char * count = s1;
    while(*count != '\0') {
       s1len++;
       count++;
    }
    
    // Start searching for the last occurrence of s2 in s1
    while (s1len >= 0)
    {
        const char * p1 = s1 + s1len - 1;
        const char * p2 = s2;
        
        // Compare s2 with the current portion of s1
        while (*p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        
        // If s2 is found in s1, update the result
        if (*p2 == '\0' )
        {
            result = s1 + s1len - 1;
            break;
        }
        
        // Move to the previous character in s1 to continue the search
        s1len--;
    }
    return result;
}



//without count the len

/*const char* findLast(const char * s1, const char * s2)
{
    const char * result = nullptr;
    
    // Store the first character of s1 for comparison
    char check = s1[0];
    
    // Move to the end of s1
    while(*s1 != '\0') 
        s1++;
    s1--; // Move back to the last character of s1

    // Start searching for the last occurrence of s2 in s1
    while(*s1 != check)
    {
        const char * p1 = s1;
        const char * p2 = s2;
        
        // Compare s2 with the current portion of s1
        while(*p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        
        // If s2 is found in s1, update the result
        if(*p2 == '\0')
        {
            result = s1;
            break;
        }
        
        // Move back in s1 to continue the search
        s1--;
    }
    return result;
}*/


int main()
{
    const char * s = "Aardvark";
    
    auto ans = findLast(s, "ar");
    cout << "findLast(s, \"ar\")->" << (&s[5] == ans ? "OK" : "FAIL") << endl;
    
    ans = findLast(s, "K");
    cout << "findLast(s, \"K\")->" << (nullptr == ans ? "OK" : "FAIL") << endl;

    return 0;
}
