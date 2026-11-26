#include <iostream>
#include <string>
using namespace std;
const char * findFirst(const char * s1, const char * s2)
{
    const char * result = nullptr;
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
            result = s1;
            break;
        }
        
        //go to next position
        s1++;
    }
    return result;
}

int main()
{
    const char * s = "Aardvark";

    auto ans = findFirst(s, "dv");
    cout << "findFirst(s, \"dv\")->" << (ans == &s[3] ? "OK" : "FAIL") << endl;

    ans = findFirst(s, "arki");
    cout << "findFirst(s, \"arki\")->" << (ans == nullptr ? "OK" : "FAIL") << endl;

    return 0;
}
