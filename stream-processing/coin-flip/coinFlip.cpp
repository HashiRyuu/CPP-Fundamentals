#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void coinFlip(istream& in, ostream& out) {
    string line;
    
    while (getline(in, line)) {
        istringstream iss(line);
        char coin;
        double numHeads = 0.0;
        double numFlips = 0.0;
        
        while (iss >> coin) {
            if (coin == 'H' || coin == 'h') {
                numHeads++;
            }
            numFlips++;
        }
        
        double percentage = (numHeads / numFlips) * 100.0;
        
        
        if (percentage > 50.0) {
           out << fixed << setprecision(1) << numHeads 
            << " heads (" << percentage << "%)" << endl;
            out << "You win!" << endl;
            out << endl;
        }else{
           out << fixed << setprecision(1) << numHeads 
           << " heads (" << percentage << "%)" << endl;
           out << endl;
        }
    }
}
int main()
{
    istringstream in("H T H H T\nT t   t T h  H\n   h");
    coinFlip(in, cout);
}
