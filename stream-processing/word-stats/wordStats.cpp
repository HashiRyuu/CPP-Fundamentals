#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

void wordStats(istream& in, ostream& out) {
    int totalWords = 0;
    int totalLength = 0;
    string word;

    while (in >> word) {
        // Remove punctuation from the word
        string cleanWord;
        for (char c : word) {
            totalLength++;
            cleanWord += c;
        }

        // Update statistics
        totalWords++;
        
    }

    // Calculate average word length
    double averageLength = static_cast<double>(totalLength) / totalWords;

    // Output results with one decimal place for the average length
    out << "Total words    = " << totalWords << endl;
    out << fixed << setprecision(1) << "Average length = " << averageLength << endl;
}
int main()
{
    istringstream in("To be or not to be, that is the question.");
    wordStats(in, cout);
}
