#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

void flipLines(istream& in, ostream& out) {
    string line;
    string nextLine;

    while (getline(in, line)) {
        // Read the next line
        if (getline(in, nextLine)) {
            // Output the next line followed by the current line
            out << nextLine << endl << line << endl;
        } else {
            // If there's no next line, just output the current line
            out << line << endl;
        }
    }
}
int main()
{
    istringstream in(
        "Twas brillig and the slithy toves\n"
        "did gyre and gimble in the wabe.\n"
        "All mimsey were the borogroves,\n"
        "and the mome raths outgrabe.\n"
        "\n"
        "\"Beware the Jabberwock, my son,\n"
        "the jaws that bite, the claws that catch,\n"
        "Beware the JubJub bird and shun\n"
        "the frumious bandersnatch.\"\n"
    );
    flipLines(in, cout);
}
