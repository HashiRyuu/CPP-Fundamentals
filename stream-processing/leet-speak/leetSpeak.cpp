#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void leetSpeak(istream& in, ostream& out) {
    string line;
    while (getline(in, line)) {
        bool firstWord = true;
        istringstream iss(line);
        string word;
        while (iss >> word) {
            //if (!firstWord) {
            //    out << " ";
            //} else {
            //    firstWord = false;
            //} for space but oppional
            out << "(";
            for (char& c : word) {
                switch (c) {
                    case 'o':
                        out << '0';
                        break;
                    case 'l':
                        out << '1';
                        break;
                    case 'e':
                        out << '3';
                        break;
                    case 'a':
                        out << '4';
                        break;
                    case 't':
                        out << '7';
                        break;
                    case 's':
                        if (&c == &word.back()) {
                            out << 'Z';
                        } else {
                            out << c;
                        }
                        break;
                    default:
                        out << c;
                        break;
                }
            }
            out << ") ";
        }
        out << endl;
    }
}
int main()
{
    istringstream in(
        "four score and\n"
        "seven years ago our\n"
        "\n"
        "fathers brought forth on this continent\n"
        "a new nation\n"
    );
    leetSpeak(in, cout);
}
