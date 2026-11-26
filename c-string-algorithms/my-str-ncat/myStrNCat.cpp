#include <iostream>
#include <string>
using namespace std;

const char * myStrNCat(char * dest, const char * src, int max)
{
    const char* result = dest;
    int len = 0;
    
    // Find the length of dest
    while(*dest != '\0')
    {
      len++;
      dest++;
    }
    
    // Move dest pointer back to the end
    dest -= len;
    
    // Append characters from src to dest
    int i = 0;
    while(src[i] != '\0' && len < max - 1)
    {
       dest[len] = src[i];
       i++;
       len++;
    }
    
    // Add null terminator
    dest[len] = '\0';
    
    return result;
}

int main() // testing
{
	const char* src = "Aardvark";
    char dest[100] = "Some";
	cout << "myStrNCat(dest, src, 3)->" << myStrNCat(dest, src, 3) << ", expected \"Some\"" << endl;
	cout << "myStrNCat(dest, src, 5)->" << myStrNCat(dest, src, 5) << ", expected \"Some\"" << endl;
	cout << "myStrNCat(dest, src, 10)->" << myStrNCat(dest, src, 10) << ", expected \"SomeAardv\"" << endl;
	
	return 0;
	
}
