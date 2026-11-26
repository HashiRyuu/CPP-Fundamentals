/**
 *  @file overloaded_input.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


#include "overloaded_input.h"

// Version 1
bool read(const string& prompt, int& n, bool ln) {
    cout << prompt;
    cin >> n;

    if (cin.fail()) {
        cin.clear();   // Clear the error flag
        cin.ignore(1024, '\n');   // Discard invalid input
        if (ln) cin.ignore(1024, '\n');  // Consume additional input if required
        return false;
    }

    if (ln) cin.ignore(1024, '\n');  // Consume additional input if required
    return true;
}

// Version 2
bool read(const string& prompt, double& n, bool ln) {
    cout << prompt;
    cin >> n;

    if (cin.fail()) {
        cin.clear();   // Clear the error flag
        cin.ignore(1024, '\n');   // Discard invalid input
        if (ln) cin.ignore(1024, '\n');  // Consume additional input if required
        return false;
    }

    if (ln) std::cin.ignore(1024, '\n');  // Consume additional input if required
    return true;
}

// Version 3
bool read(const string& prompt, string& s, bool useGetline) {
    cout << prompt;
    if (useGetline) {
        getline(cin, s);
    } else {
        cin >> s;
    }

    return !cin.fail();
}

// Version 4
bool read(char& c, char sentinel) {
    cin >> noskipws >> c;

    if (c == sentinel) {
        return false;
    }

    cin.ignore(1024, '\n');  // Consume additional end-of-line input
    cin.clear();   // Reset the input flags
    string junk;
    cin >> junk;   // Consume an invalid token
    return true;
}

// Usage example
int run_example()
{

    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}
