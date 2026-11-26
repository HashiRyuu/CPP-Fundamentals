#include <iostream>
#include <string>
using namespace std;

int removeIfFound(int a[], size_t& size, const int& remove)
{
    int result = 0;
    for(int i = 0; i < size; ++i)
    {
       if(a[i] == remove)
       {
          --size;
          result++;
          for(int j = i; j < size; ++j)
          {
             a[j] = a[j + 1];
          }
          --i;
       }
    }
    return result;
}

int main() // testing
{
	int a[100] = {10, 54, 81, 45, 95, 25, 10, 95};
	size_t size = 8;
	cout << "removeIfFound(a, size, 10)->" 
		<< removeIfFound(a, size, 10) << endl;
	cout << "Expected: 2" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 6" << endl;
	cout << "a->[" << a[0];
	for (size_t i = 1; i < size; ++i) cout << ", " << a[i];
	cout << "]" << endl;
	cout << "Expected: [54, 81, 45, 95, 25, 95]" << endl;
	
	// Test 2
	size = 0;
	cout << "removeIfFound(a, size, 55)->" << removeIfFound(a, size, 55) << endl;
	cout << "Expected: 0" << endl;
	
	return 0;
	
}
