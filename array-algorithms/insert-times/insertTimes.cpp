#include <iostream>
#include <string>
using namespace std;

bool insertTimes(int a[], size_t& b, int value, int pos, int repeat, int capacity)
{
    if (pos > b || b + repeat > capacity) {
        return false; // Insert position past the size or exceeding capacity
    }

    for (int count = 0; count < repeat; ++count) {
        for (int i = b; i > pos; --i) {
            a[i] = a[i - 1];
        }
        a[pos] = value;
        ++b; // Increase size after each insertion
        ++pos; // Move position for the next insertion
    }
    
    /*    int count = 0;
    while(count < repeat)
    {
       for(int i = b; i > pos; --i)
       {
           a[i] = a[i - 1];
       }
       a[pos] = value;
       pos++;
       count++;
       b++;
    }*/ // other way use while instead of for

    return true; // Elements inserted successfully
}

int main() // testing
{
	int a[100] = {10, 20, 30, 40, 50};
	size_t size = 5;
	cout << boolalpha;	// print true/false
	cout << "insertTimes(a, size, 100, 2, 4, 100)->" 
		<< insertTimes(a, size, 100, 2, 4, 100) << endl;
	cout << "Expected: true" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 9" << endl;
	cout << "a->[" << a[0];
	for (size_t i = 1; i < size; ++i) cout << ", " << a[i];
	cout << "]" << endl;
	cout << "Expected: [10, 20, 100, 100, 100, 100, 30, 40, 50]" << endl;
	
	// Test 2 - reduce the capacity
	cout << "insertTimes(a, size, 100, 2, 4, 10)->" 
		<< insertTimes(a, size, 100, 2, 4, 10) << endl;
	cout << "Expected: false" << endl;
	
	return 0;
}
