#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void countWords(istream& in, ostream& out) {
    int totalLines = 0;
    int totalWords = 0;

    string line;
    while (getline(in, line)) {
        totalLines++;
        stringstream ss(line);
        string word;
        while (ss >> word) {
            totalWords++;
        }
    }

    double averageWordsPerLine = static_cast<double>(totalWords) / totalLines;

    out << "Total lines = " << totalLines << endl;
    out << "Total words = " << totalWords << endl;
    out << "Average words per line = " << fixed << setprecision(3) << averageWordsPerLine << endl;
}
int main()
{
    istringstream in("You must show: your library card\n"
                    "\n"
                    "to 1) a TA or 2) the instructor \n"
                    "before\n"
                    "\n"
                    "leaving the room. \n"
    );
    countWords(in, cout);
}
