#include <iostream>
#include <string>
using namespace std;

int numStr(const char * s1, const char * s2)
{
    int result = 0;
    while(*s1 != '\0')
    {
        const char * p1 = s1;
        const char * p2 = s2;
        //go through all char to see if match or not
        while(*p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        //check if p2 reach to end which mean the every char is match
        if(*p2 == '\0')
        {
            result++;
        }
        
        //go to next position
        s1++;
    }
    return result;
}

int main() // testing
{
    const char* s = "abaracadabara";
    cout << "numStr(\"abaracadabara\", \"a\")->";
    cout << (numStr("abaracadabara", "a") == 7 ? "OK" : "FAIL") << endl;
    cout << "numStr(\"abaracadabara\", \"bara\")->";
    cout << (numStr("abaracadabara", "bara") ==  2 ? "OK" : "FAIL") << endl;
    cout << "numStr(\"abaracadabara\", \"cad\")->";
    cout << (numStr("abaracadabara", "cad") == 1 ? "OK" : "FAIL") << endl;
    
    return 0;
    
}
