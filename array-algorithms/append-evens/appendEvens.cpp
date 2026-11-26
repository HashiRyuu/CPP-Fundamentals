#include <iostream>
#include <string>
using namespace std;
int appendEvens(const int a[], int b[], const size_t& sizeA, size_t& sizeB)
{
    int result = 0;
    if(sizeA == 0) return -1;

    size_t i = 0, j = 0; 
    while(i < sizeA)
    {
       if(a[i] % 2 == 0)
       {
          b[sizeB] = a[i];
          sizeB++;
          result++;
       }
       i++;
    }
    return result;
}


int main()
{
    int src[] = {1, 2, 3}, dest[30] = {7, 9};
    size_t srcSize = 3, destSize = 2;
    int status = appendEvens(src, dest, srcSize, destSize);
    cout << "status: " << status << ", expected: 1" << endl;
    cout << "destSize: " << destSize << ", expected: 3" << endl;
    cout << "dest: [" << dest[0];
    for (size_t i = 1; i < destSize; ++i) cout << ", " << dest[i];
    cout << "]" << endl;
    cout << endl;
    cout << "--done--" << endl;
}
