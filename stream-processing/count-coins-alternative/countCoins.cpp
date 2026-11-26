#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void countCoins(istream& in, ostream& out)
{
    int value;
    string cointype;
    int cents = 0;
    
    while (in >> value >> cointype)
    {
        for (char& e : cointype)
            e = tolower(e);

        if (cointype == "pennies") cents += value * 1;
            
        if (cointype == "quarters") cents += value *25;
            
        if (cointype == "nickels") cents += value *5;
            
        if (cointype == "dimes") cents += value * 10;
            
    }

    int dollar = cents / 100;
    int cent = cents % 100;
    out << "Total money: $" << dollar << "." << fixed << setw(2) << setfill('0') << cent << endl;
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
