#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void tokenStats(istream& in, ostream& out) {
    int lineCount = 0;
    string line;

    size_t maxLineLength = 0;
    string longestLine;

    while (getline(in, line)) {
        lineCount++;

        // Tokenize the line
        istringstream iss(line);
        string token;
        size_t tokenCount = 0;
        size_t maxTokenLength = 0;

        while (iss >> token) {
            tokenCount++;
            if (token.length() > maxTokenLength) {
                maxTokenLength = token.length();
            }
        }

        // Update statistics
        if (line.length() > maxLineLength) {
            maxLineLength = line.length();
            longestLine = line;
        }

        out << "Line " << lineCount << " has " << tokenCount << " tokens (longest = " << maxTokenLength << ")" << endl;
    }

    out << "Longest line: " << longestLine << endl;
}
int main()
{
    istringstream in(
        "\"Beware the Jabberwock, my son,\n"
        "the jaws that bite, the claws that catch,\n"
        "Beware the JubJub bird and shun\n"
        "the frumious bandersnatch.\""
    );
    tokenStats(in, cout);
}
