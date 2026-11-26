#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

int mostUnique(istream& in, ostream& out) {
    int maxUnique = 0;
    string line;
    int period = 0;

    while (getline(in, line)) {
        period++;
        int unique = 0;
        int prev = -1;
        int current;
        istringstream iss(line);
        while (iss >> current) {
            if (current != prev) {
                unique++;
                prev = current;
            }
        }

        out << "Period " << period << ": " << unique << " unique scores" << endl;

        if (unique > maxUnique) {
            maxUnique = unique;
        }
    }

    return maxUnique;
}
int main()
{
    istringstream in("10 10 10  9 9   8    3\n"
                    "3 3 8 10 9 7   7 6 6\n"
                    "4  1 9  9 10  7 7 \n"
                    "10  10   10 10\n"
                    );
    int result = mostUnique(in, cout);
    cout << "result=" << result << endl;
}
