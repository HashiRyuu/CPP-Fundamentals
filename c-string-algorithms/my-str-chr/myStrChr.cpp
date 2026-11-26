#include <iostream>
#include <string>
using namespace std;

const char * myStrChr(const char * s, char c)
{
    const char* result = nullptr;
    while(*s != '\0')
    {
       if(*s == c) return s;
       s++;
    }
    return result;
}

int main() // testing
{
	const char* s = "Aardvark";
	cout << "myStrChr(\"Aardvark\", 'a')->";
	cout << (myStrChr("Aardvark", 'a') == (s+1) ? "OK" : "FAIL") << endl;
	cout << "myStrChr(\"Aardvark\", 'k')->";
	cout << (myStrChr("Aardvark", 'k') == (s+7) ? "OK" : "FAIL") << endl;
	cout << "myStrChr(\"Aardvark\", 'V')->";
	cout << (myStrChr("Aardvark", 'V') == nullptr ? "OK" : "FAIL") << endl;
	
	return 0;
	
}
