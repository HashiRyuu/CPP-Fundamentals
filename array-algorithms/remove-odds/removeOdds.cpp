#include <iostream>
#include <string>
using namespace std;

int removeOdds(int a[], size_t& b)
{
    if(b == 0) return -1;
    
    
    int result = 0;
    size_t i = 0; 
    while(i < b)
    {
       if(a[i] % 2 == 1)
       {
          for(size_t j = i; j < b - 1; ++j)
          {
              a[j] = a[j + 1];
          }
          b--;
          result++;
       }
       else
       {
          i++;
       }
    }
    
   
    return result;
}

int main() // testing
{
	int a[100] = {2, 3, 3, 4, 4, 5, 5, 5};
	size_t size = 8;
	cout << "removeOdds(a, size)->" << removeOdds(a, size) << endl;
	cout << "Expected: 5" << endl;
	cout << "size: " << size << endl;
	cout << "Expected: 3" << endl;
	cout << "a->[" << a[0];
	for (size_t i = 1; i < size; ++i) cout << ", " << a[i];
	cout << "]" << endl;
	cout << "Expected: [2, 4, 4]" << endl;
	
	// Test 2
	size = 0;
	cout << "removeOdds(a, size)->" << removeOdds(a, size) << endl;
	cout << "Expected: -1" << endl;
	
	return 0;
	
}
