#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void dupeCount(istream& in, ostream& out) {
    string line;
    
    while (getline(in, line)) {
        istringstream iss(line);
        string prevToken, currentToken;
        int count = 1; // Start count at 1 since we need at least two consecutive occurrences
        
        
        
        while (iss >> currentToken) {
            if (currentToken == prevToken) {
                count++;
            } else {
                if (count > 1) {
                    out << prevToken << '*' << count << ' ';
                }
                count = 1; // Reset count for the new token
            }
            
            prevToken = currentToken; // Update prevToken for the next iteration
        }
        
        if (count > 1) { // Check if the last token was a duplicate
            out << prevToken << '*' << count;
        }
        
        out << endl;
    }
}
int main()
{
    ifstream in("dupeCount.txt");
    dupeCount(in, cout);
}
