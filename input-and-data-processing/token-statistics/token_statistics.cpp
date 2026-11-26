/**
 *  @file token_statistics.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;


#include "token_statistics.h"
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
