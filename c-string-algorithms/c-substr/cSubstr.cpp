#include <iostream>
#include <string>
using namespace std;

char * cSubstr(char * s1, const char * begin, const char * end, int capacity)
{
    char* result = s1;
    int count = 0;
    while(begin != end && count < capacity - 1)
    {
       *s1 = *begin;
       s1++;
       begin++;
       count++;
    }
    
    *s1 = '\0';
    return result;
}

int main() // testing
{
	char dest[50];
    const char src[100] = "Hello World";
    cout << "src = \"Hello World\"" << endl;
    cout << "cSubstr(dest, src+0, src+3, 10)->" << cSubstr(dest, src+0, src+3, 10) << endl;
    cout << "cSubstr(dest, src+0, src+5, 10)->" << cSubstr(dest, src+0, src+5, 10) << endl;
    cout << "cSubstr(dest, src+0, src+50, 3)->" << cSubstr(dest, src+0, src+50, 3) << endl;
   
	
	return 0;
	
}
