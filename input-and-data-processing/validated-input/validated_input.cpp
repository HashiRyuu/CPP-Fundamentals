/**
 *  @file validated_input.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;


#include "validated_input.h"

string getLine(const string& prompt) {
    if (!prompt.empty() && !isspace(prompt.back())) {
        cout << prompt << " ";
    } else {
        cout << prompt;
    }

    string input;
    getline(cin, input);// enter value
    return input;
}

int getInt(const string& prompt) {
    while (true) {
        string input = getLine(prompt);// called the getLine function above not getline from library

        if (!input.empty()) {
            istringstream in(input);
            int n;
            in >> n;

            if (in.eof() && !in.fail()) {
                return n;
            }

            in >> ws; // Strip trailing whitespace

            if (in.eof() && !in.fail()) {
                return n;
            }

            cout << "Invalid input. Please enter a valid integer." << endl;
        } else {
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
    }
}

double getReal(const string& prompt) {
    while (true) {
        string input = getLine(prompt);// called the getLine function above not getline from library

        if (!input.empty()) {
            istringstream in(input);
            double n;
            in >> n;

            if (in.eof() && !in.fail()) {
                return n;
            }

            in >> ws; // Strip trailing whitespace

            if (in.eof() && !in.fail()) {
                return n;
            }

            cout << "Invalid input. Please enter a valid integer." << endl;
        } else {
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
    }
}

bool getYN(const string& prompt) {
    while (true) {
        string input = getLine(prompt);// called the getLine function above not getline from library
        if (!input.empty() && (tolower(input[0]) == 'y' || tolower(input[0]) == 'n')) {
            return tolower(input[0]) == 'y';
        } else {
            cout << prompt << endl;
        }
    }
}

int main()
{

     do
     {
         string s = getLine("Enter a string: ");
         cout << "s->\"" << s << "\"" << endl;

         int n = getInt("Enter an integer:");
         cout << "n->" << n << endl;

         double d = getReal("Enter a real number: ");
         cout << "d->" << d << endl;

     } while (getYN("Try again? (Y/N)"));

    return 0;
}
