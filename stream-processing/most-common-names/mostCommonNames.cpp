#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

int mostCommonNames(istream& in, ostream& out) {
    string line;
    int total = 0;
    while(getline(in, line)) {
        istringstream iss(line);
        int count = 1;
        int unique = 0;
        string prev;
        string name;
        string commonName;
        iss >> prev; // read the first word
        total++;
        while(iss >> name) {
            if(name == prev) {
                count++;
            } else {
                if(count > unique) {
                    unique = count;
                    commonName = prev;
                }
                count = 1; // reset count for the new word
                total++;
            }
            prev = name;
        }
        // check the last word in the line
        if(count > unique) {
            commonName = prev;
        }
        out << "Most common: " << commonName << endl;
    }
    return total;
}
int main()
{
    istringstream in(
        "Benson Eric   Eric  Marty Kim  Kim Kim   Jenny  Nancy Nancy  Nancy  Paul  Paul\n"
        "Stuart Stuart Stuart Ethan Alyssa Alyssa Helene Jessica Jessica Jessica Jessica\n"
        "Jared  Alisa Yuki   Catriona  Cody   Coral   Trent Kevin  Ben Stefanie Kenneth\n"
    );
    int unique = mostCommonNames(in, cout);
    cout << unique << " unique names" << endl;
}
