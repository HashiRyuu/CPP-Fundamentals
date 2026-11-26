#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void countCoins(istream& in, ostream& out) {
    int totalCents = 0;
    int value;
    string coinType;
    int coinvalue;
    while (in >> value >> coinType) {
        // Convert coinType to lowercase
        for (char& c : coinType) {
            c = tolower(c);
        }
         if (coinType == "pennies") {
             coinvalue = 1;
          } else if (coinType == "nickels") {
             coinvalue = 5;
          } else if (coinType == "dimes") {
             coinvalue = 10;
          } else if (coinType == "quarters") {
             coinvalue = 25;
          }
        // Add the value to the total cents
        totalCents += value * coinvalue;
    }

    // Calculate dollars and cents
    int dollars = totalCents / 100;
    int cents = totalCents % 100;

    // Output total money
    out << "Total money: $" << dollars << ".";
    out << setw(2) << setfill('0') << cents << endl;
}
int main()
{
    istringstream in("3 pennies 2 quarters 1 pennies 3 nickels 4 dimes");
    countCoins(in, cout);
    in.clear();
    in.str("12   QUARTERS      1   Pennies      33\n" 
            "PeNnIeS      \n"
            "\n"
            "    10    niCKELs\n"
            );
    countCoins(in, cout);
}
