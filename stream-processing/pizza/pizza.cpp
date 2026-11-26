#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void pizza(istream& in, ostream& out) {
    string line;
    while (getline(in, line)) {
        int totalSlices = 0;
        int wholePizzas = 0;
        int halfPizzas = 0;
        int singleSlices = 0;

        stringstream ss(line);
        string token;
        while (ss >> token) {
           string cleanWord;
           for (char c : token) {
               cleanWord += tolower(c);
           }
            if (cleanWord == "whole") {
                totalSlices += 8;
                wholePizzas++;
            } else if (cleanWord == "half") {
                totalSlices += 4;
                halfPizzas++;
            } else if (cleanWord == "slice") {
                totalSlices++;
                singleSlices++;
            }
        }

        // Calculate the minimum number of boxes required
        int minBoxes = (totalSlices + 7) / 8; // Ceiling division to ensure minimum number of boxes

        out << minBoxes << " / " << wholePizzas + halfPizzas + singleSlices 
            << " pizza boxes used" << endl;
    }
}
int main()
{
    istringstream in("slice half slice whole whole half half half\n"
        "whole HALF   WhoLE half WHOLE  WhOlE  Slice         half sLICe halF\n"
        "WHOLE slice   WHOLE SLICE whole SLICE    whole slice WHOLE half\n"
        "\n"
        "slice\n"
    );
    pizza(in, cout);
}
