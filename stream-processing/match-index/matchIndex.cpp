#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void matchIndex(istream& in, ostream& out) {
    string line1;
    string line2;
    int lineCount = 0;

    while (getline(in, line1) && getline(in, line2)) {
        lineCount += 2;
        out << "lines " << lineCount - 1 << " and " << lineCount << ": ";

        bool matchFound = false;

        // Iterate over the shorter line
        int minLength = min(line1.size(), line2.size());
        for (int i = 0; i < minLength; ++i) {
            if (line1[i] == line2[i]) {
                out << i << " ";
                matchFound = true;
            }
        }

        if (!matchFound) {
            out << "none";
        }

        out << std::endl;
    }
}
int main()
{
    istringstream in(
        "The quick brown fox\n"
        "Those achy down socks\n"
        "Wheels on the school bus go round\n"
        "The wipers go swish swish swish\n"
        "His name is Robert Paulson\n"
        "So long 'n thanks for all the fish\n"
        "Humpty Dumpty sat on a wall\n"
        "And then he also had a great fall\n"
        "booyakasha\n"
        "Bruno Ali G Borat\n"
    );
    matchIndex(in, cout);
}
