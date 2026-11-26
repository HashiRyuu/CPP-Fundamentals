#include <string>
using std::string;
int count7(int n)
{
    // Base case: if n is 0, return 0 (no 7s)
    if (n == 0) {
        return 0;
    } else {
        // Check if the rightmost digit is 7
        int num = n % 10;
        int count = (num == 7) ? 1 : 0;

        // Recursively count the 7s in the remaining digits
        return count + count7(n / 10);
    }
}

