#include <iostream>
#include <string>
using namespace std;

const char * myStrNCpy(char * dest, const char * src, int max)
{
    const char* result = dest;
    int index = 0;
    while(index != max - 1)
    {
       dest[index] = src[index];
       index++;
    }
    
    dest[index] = '\0';
    
    return result;
}

int main() // testing
{
	const char* src = "Aardvark";
    char dest[100] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	cout << "myStrNCpy(dest, src, 3)->" << myStrNCpy(dest, src, 3) << ", expected \"Aa\"" << endl;;
	cout << "myStrNCpy(dest, src, 5)->" << myStrNCpy(dest, src, 5) << ", expected \"Aard\"" << endl;;
	cout << "myStrNCpy(dest, src, 50)->" << myStrNCpy(dest, src, 50) << ", expected \"Aardvark\"" << endl;;
	
	return 0;
	
}
