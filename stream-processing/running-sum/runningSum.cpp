#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void runningSum(std::istream& in, std::ostream& out) {
    double num;
    double sum = 0;
    double maxSum = 0;
    ostringstream oss;

    while (in >> num) {
        sum += num;
        oss << sum << " "; // Append the current running sum to the stringstream
        if (sum > maxSum) {
            maxSum = sum; // Update maxSum if necessary
        }
    }

    out << "running sum = " << oss.str() << endl; // Output the running sum
    out << "Max sum = " << maxSum; // Output the maximum running sum
}
int main()
{
    istringstream in("3.25 4.5 -8.25 7.25 3.5 4.25 -6.5 5.25");
    runningSum(in, cout);
}
