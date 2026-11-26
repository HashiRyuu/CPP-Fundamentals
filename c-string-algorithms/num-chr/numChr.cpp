#include <iostream>
#include <string>
using namespace std;

int numChr(const char * s, char c)
{
    int result = 0;
    while(*s != '\0')
    {
       if(*s == c) result ++;
       
       s++;
    }
    return result;
}

int main() // testing
{
    const char* s = "Aardvark";
    cout << "numChr(\"Aardvark\", 'a')->";
    cout << (numChr("Aardvark", 'a') == 2 ? "OK" : "FAIL") << endl;
    cout << "numChr(\"Aardvark\", 'A')->";
    cout << (numChr("Aardvark", 'A') ==  1 ? "OK" : "FAIL") << endl;
    cout << "numChr(\"Aardvark\", 'V')->";
    cout << (numChr("Aardvark", 'V') == 0 ? "OK" : "FAIL") << endl;
    
    return 0;
    
}
