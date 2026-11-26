#include <iostream>
#include <string>
using namespace std;

const char * myStrrChr(const char * s, char c)
{
    const char* result = nullptr;
    char check = s[0];
    while(*s != '\0') s++;
    s--;
    
    while(*s != check)
    {
       if(*s == c) return s;
       s--;
    }
    return result;
}

int main() // testing
{
	const char* s = "Aardvark";
	cout << "myStrrChr(\"Aardvark\", 'a')->";
	cout << (myStrrChr("Aardvark", 'a') == (s+5) ? "OK" : "FAIL") << endl;
	cout << "myStrrChr(\"Aardvark\", 'V')->";
	cout << (myStrrChr("Aardvark", 'V') == nullptr ? "OK" : "FAIL") << endl;
	
	return 0;
	
}
