#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool negativeSum(istream& in, ostream& out) {
    int sum = 0;
    int step = 0;
    int num;

    while (in >> num) {
        sum += num;
        step++;

        if (sum < 0) {
            out << sum << " after " << step << " steps" << endl;
            return true;
        }
    }

    out << "no negative sum" << endl;
    return false;
}
int main()
{
    istringstream in("38 4 19 -27 -15 -3 4 19 38");
    bool result = negativeSum(in, cout);
    in.clear();
    in.str("14 7 -10 9 -18 -10 17 42 98");
    result = negativeSum(in, cout);
}
