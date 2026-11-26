#include <iostream>
#include <string>
using namespace std;
int cStrFind(const char *s1, const char * s2)
{
    int result = -1;
    int index = 0; // Variable to store the index of the matched character
    
    while(*s1 != '\0')
    {
        const char * p1 = s1;
        const char * p2 = s2;
        
        // Check if the current portion of s1 matches s2
        while(*p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        
        // If every character in s2 matches the characters in the current portion of s1
        // Update the result with the index of the first character where the match starts
        if(*p2 == '\0')
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
    const char * s = "Aardvark";
    cout << "s->Aardvark" << endl;
    cout << "cStrFind(s, \"dv\")->" << cStrFind(s, "dv") << ", expect 3" << endl;
    cout << "cStrFind(s, \"arki\")->" << cStrFind(s, "arki") << ", expect -1" << endl;
    return 0;
}
