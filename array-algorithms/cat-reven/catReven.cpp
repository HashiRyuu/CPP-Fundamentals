#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool catReven(int dest[], size_t& size, const int& capacity, const int src[], const size_t& sizeB)
{
    if (size + sizeB > capacity || sizeB == 0) {
        return false; // not enough space in destination or source array is empty
    }
    
    for (size_t i = sizeB - 1; i > 0; --i)
    {
        if (src[i] % 2 == 0)
        {
            dest[size++] = src[i]; // Append even elements in reverse order
        }
    }
    
    return true;
}

int main()
{
    int src[50] = {1, 2, 3, 4, 5, 6};
    int dest[50] = {98, 45, 18, 72};
    size_t dSize = 4;
    
    bool ok = catReven(dest, dSize, 50, src, 6);
    
    cout << "dSize: " << dSize << ", expected: 7" << endl;
    cout << boolalpha << "ok: " << ok << ", expected: true" << endl;
    cout << "    dest: [" << dest[0];
    for (size_t i = 1; i < dSize; ++i) cout << ", " << dest[i];
    cout << "]" << endl;
    cout << "expected: [98, 45, 18, 72, 6, 4, 2]" << endl;

    return 0;
}
