#include <iostream>
#include <string>
using namespace std;

char * replace(char * s1, char c1, char c2)
{
    char* result = s1;
    while(*s1 != '\0')
    {
       if(*s1 == c1) *s1 = c2;
       s1++;
    }
    return result;
}

int main() // testing
{
	char src[50] = "Hello Yellow Peach";
    cout << "Original->" << src << endl;
    cout << "replace(src, 'l', '1')->" << replace(src, 'l', '1') << endl;
    cout << "replace(src, 'o', '0')->" << replace(src, 'o', '0') << endl;
    cout << "replace(src, 'e', '3')->" << replace(src, 'e', '3') << endl;
    cout << "replace(src, 'a', '4')->" << replace(src, 'a', '4') << endl;
    
	
	return 0;
	
}
