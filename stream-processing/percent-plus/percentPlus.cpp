#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void percentPlus(istream& in, ostream& out) {
    string line;
    while (getline(in, line)) {
        string firstname, secondname;
        istringstream ns(line);
        ns >> firstname >> secondname;
        out << firstname << " " << secondname << ": ";

        string secondline;
        getline(in, secondline); // Read the second line containing plus/minus characters
        
        double plus = 0.0, minus = 0.0;
        for (char sign : secondline) {
            if (sign == '+') {
                plus++;
            } else if (sign == '-') {
                minus++;
            }
        }

        double percentage = (plus / (plus + minus)) * 100.0;
        out << fixed << setprecision(1) << percentage << "% plus" << endl;
    }
}
int main()
{
    istringstream in(
        "Kane, Erica\n"
        "--+-+\n"
        "Chandler, Adam\n"
        "++-+\n"
        "Martin, Jake\n"
        "+++++++\n"
        "Dillon, Amanda\n"
        "++-++-+-\n"
    );
    percentPlus(in, cout);
}
