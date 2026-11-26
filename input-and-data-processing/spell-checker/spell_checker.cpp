/**
 *  @file spell_checker.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;


#include "spell_checker.h"

string clean(const string& word) {
    // Remove punctuation and convert to lowercase
    string cleaned_word;
    for (char c : word) {
        if (isalpha(c)) {
            cleaned_word += tolower(c);
        }else if(isdigit(c)){
             cleaned_word += c;
        }
    }
    return cleaned_word;
}

vector<Word> spellCheck(istream& in,
                    const vector<string>& dictionary,
                    const vector<string>& excluded) {
    vector<Word> results;
    string word;
    Word new_word;
    while (in) {
         pos_type current_position = in.tellg();
        if (current_position == -1) // At end of file
            break;
        in >> word >> ws;
        word = clean(word);
        // Check if word is in ignored list or in dictionary list
        //If the word is found in the excluded or dictionary vector,
        //the iterator will not be equal to excluded.end() or dictionary,
        //and the condition will be true.
        if (find(excluded.begin(), excluded.end(), word) != excluded.end() ||
        find(dictionary.begin(), dictionary.end(), word) != dictionary.end())
            continue;


        // If word is not found in dictionary, it's considered misspelled
        bool found = false;
        for (Word& w : results) {
            if (w.word == word) {
                w.positions.push_back((current_position));
                found = true;
                break;
            }
        }
        if (!found) {
            new_word.word = word;
            new_word.positions.push_back((current_position));
            results.push_back(new_word);
        }

    }
    return results;
}

// Usage example
vector<string> fileToWords(const string& filename);
#include <sstream>
#include <iomanip>
int run_example()
{

     vector<string> dictionary = fileToWords("words");
     vector<string> ignore = fileToWords("excluded.txt");
     istringstream words("facebook speak r u l8 2 wrk");
     vector<Word> misspelled = spellCheck(words, dictionary, ignore);
     cout << "Misspelled words" << endl;
     int i{1};
     for (const auto& e : misspelled)
     {
         cout << setw(4) << i++ << ". " << e.word << ", [ ";
         for (auto pos : e.positions)
             cout << pos << ", ";
         cout << "]" << endl;
     }

    return 0;
}
