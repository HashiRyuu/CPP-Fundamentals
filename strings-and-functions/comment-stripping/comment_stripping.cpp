/**
 *  @file comment_stripping.cpp
 */
#include <string>
#include <iostream>
using namespace std;


void strip() {
    bool inSingleCmt = false;
    bool inMultiCmt = false;
    bool inString = false;
    char ch;

    while (cin.get(ch)) {
        if (inSingleCmt && ch == '\n') {
            inSingleCmt = false;
        } else if (inString && ch == '\\' && cin.peek() == '"') {
            // Handle escaped quote inside a string
            cout.put(ch);
            cin.get(ch); // Consume the peeked character
        } else if (inString && ch == '"') {
            // End of string
            inString = false;
        } else if (inMultiCmt && ch == '*' && cin.peek() == '/') {
            // End of multi-line comment
            inMultiCmt = false;
            cin.get(ch); // Consume the '*'
            cin.get(ch); // Consume the '/'
        } else if (!inString && !inSingleCmt && !inMultiCmt) {
            if (ch == '"') {
                // Start of string
                inString = true;
            } else if (ch == '/' && cin.peek() == '*') {
                // Start of multi-line comment
                inMultiCmt = true;
                cin.get(ch); // Consume the '*'
                cin.get(ch); // Consume the '/'
            } else if (ch == '/' && cin.peek() == '/') {
                // Start of single-line comment
                inSingleCmt = true;
                cin.get(ch); // Consume the '/'
            }
        }

        // Output the character if not in a comment
        if (cin && !inSingleCmt && !inMultiCmt) {
            cout.put(ch);
        }
    }
}

int main()
{

    strip();
    return 0;
}
