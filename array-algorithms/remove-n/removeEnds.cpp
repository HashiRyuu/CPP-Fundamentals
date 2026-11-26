#include <iostream>
#include <string>
using namespace std;

bool removeN(int a[], size_t& size, const int& removeRepeat, const int& pos)
{
    bool result = true;
    if (pos >= size || removeRepeat > size - pos) {
        return false; // position out of bounds or not enough elements to remove
    }
    
  for (size_t i = pos; i < size - removeRepeat; ++i) {
        a[i] = a[i + removeRepeat];
    }

    size -= removeRepeat; // Reduce the size of the array by n
    return result;
}

int main() // testing
{
	int a[100] = {10, 54, 81, 45, 95, 25, 10, 95};
	size_t size = 8;
	cout << boolalpha;	// print true/false
	cout << "removeN(a, size, 3, 2)->" << removeN(a, size, 3, 2) << endl;
	cout << "Expected: true" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 5" << endl;
	cout << "a->[" << a[0];
	for (size_t i = 1; i < size; ++i) cout << ", " << a[i];
	cout << "]" << endl;
	cout << "Expected: [10, 54, 25, 10, 95]" << endl;
	
	// Test 2 - 
	cout << "removeN(a, size, 3, 3)->" << removeN(a, size, 3, 3) << endl;
	cout << "Expected: false" << endl;
	
	return 0;
}
