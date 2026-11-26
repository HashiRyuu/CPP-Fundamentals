#include <iostream>
#include <string>
using namespace std;

int removeEnds(int a[], size_t& b)
{
    if(b == 0) return -1;
    
    int result = 0;
    
    if(b % 2 == 0)
    {
        for(size_t j = 0; j < b - 2; ++j)
        {
            a[j] = a[j + 1];
        }
        result += 2;
    }
    else
    {
        for(size_t j = 0; j < b - 1; ++j)
        {
            a[j] = a[j + 2];
        }
        result += 3;
    }
    
    b -= result;
    
    return result;
}

int main() // testing
{
	int a[100] = {2, 3, 3, 4, 5};
	size_t size = 5;
	cout << "removeEnds(a, size)->" << removeEnds(a, size) << endl;
	cout << "Expected: 3" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 2" << endl;
	cout << "a->[" << a[0];
	for (size_t i = 1; i < size; ++i) cout << ", " << a[i];
	cout << "]" << endl;
	cout << "Expected: [3, 4]" << endl;
	
	// Test 2
	cout << "removeEnds(a, size)->" << removeEnds(a, size) << endl;
	cout << "Expected: 2" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 0" << endl;

	// Test 3
	cout << "removeEnds(a, size)->" << removeEnds(a, size) << endl;
	cout << "Expected: -1" << endl;
	
	return 0;
	
}
