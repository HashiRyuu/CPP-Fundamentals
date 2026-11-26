#include <string>
using std::string;
int bunnyEars2(int n)
{
    if (n == 0) {
        return 0;
    } else if (n % 2 == 1) {
        return 2 + bunnyEars2(n - 1);
    } else {
        return 3 + bunnyEars2(n - 1);
    }
}

