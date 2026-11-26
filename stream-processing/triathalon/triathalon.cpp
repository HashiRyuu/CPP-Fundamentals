#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void triathalon(istream& in, ostream& out) {
    string name;
    int swimming, biking, running;
    int winnerTime = 0;
    bool firstAthlete = true;

    while (in >> name >> swimming >> biking >> running) {
        int totalTime = swimming + biking + running;

        // Calculate the time difference from the winner's time
        int timeDifference = 0;
        if (!firstAthlete) {
            timeDifference = totalTime - winnerTime;
        } else {
            firstAthlete = false;
            winnerTime = totalTime;
        }

        out << name << ": " << totalTime << " min";
        if (timeDifference != 0) {
            out << " (+" << timeDifference << " min)";
        }
        out << endl;
    }
}
int main()
{
    istringstream in("Meghan 12 40 23 Bryan 16\n"
                    "42 20 Lori 14 41 29 Jessica 18\n"
                    "\n"
                    "       37 30 Toni 19   43\n"
                    "29 Tamara 17 42 34\n");
    triathalon(in, cout);
}
