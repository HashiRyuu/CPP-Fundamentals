#include <iostream>
#include <string>
using namespace std;

bool insertInOrder(int dest[], size_t& size, const int& capacity, const int src[], const size_t& sizeB)
{
    if (size + sizeB > capacity) {
        return false; // exceeding capacity
    }
    
    size_t destIndex = 0;
    size_t srcIndex = 0;

    while (srcIndex < sizeB) {
        // Find the correct position to insert src[srcIndex] into dest[]
        while (destIndex < size && dest[destIndex] < src[srcIndex]) {
            destIndex++;
        }

        // Shift elements in dest[] to make room for src[srcIndex]
        for (size_t i = size; i > destIndex; --i) {
            dest[i] = dest[i - 1];
        }

        // Insert src[srcIndex] into dest[]
        dest[destIndex] = src[srcIndex];
        size++; // Increase size of dest[]

        srcIndex++; // Move to the next element in src[]
    }

    return true;
}

int main() // testing
{
	const int src[100] = {1, 3, 5, 7};
	int a[100] = {2, 4, 6};
	size_t size = 3;
	cout << boolalpha;	// print true/false
	cout << "insertInOrder(a, size, 50, src, 3)->" 
		<< insertInOrder(a, size, 50, src, 3) << endl;
	cout << "Expected: true" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 6" << endl;
	cout << "a->[" << a[0];
	for (size_t i = 1; i < size; ++i) cout << ", " << a[i];
	cout << "]" << endl;
	cout << "Expected: [1, 2, 3, 4, 5, 6]" << endl;
	
	// Test 2 - reduce the capacity - won't fit
	cout << "insertInOrder(a, size, 8, src, 3)->" 
		<< insertInOrder(a, size, 8, src, 3) << endl;
	cout << "Expected: false" << endl;
	
	return 0;
}
