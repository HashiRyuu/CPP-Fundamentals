/**
 *  @file word_file_reader.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;


#include "word_file_reader.h"

vector<string> fileToWords(const string& filename){
    vector<string> result;
    ifstream inputfile(filename);
    if (!inputfile.is_open()) {
        throw invalid_argument("Unable to open file: " + filename);
    }

    string word;
    while (inputfile >> word) {
        result.push_back(word);
    }

    return result;
}

// Usage example
int run_example()
{

    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}
