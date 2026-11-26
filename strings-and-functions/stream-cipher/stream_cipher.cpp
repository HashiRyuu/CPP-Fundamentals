/**
 * @file stream_cipher.cpp
 */
#include <string>
#include <iostream>
#include <cctype>
using namespace std;


#include "stream_cipher.h"

namespace enc {

    /**
     * Implements the Caesar cipher.
     * @param in the stream containing the plaintext.
     * @param out the stream containing the ciphertext.
     * @param key the key used to shift the characters (rightward).
     */
void cipher(istream& in, ostream& out, unsigned key){
    char c;
    while (in.get(c)) {
        if (isalpha(c)) {
            // Adjust the key to handle wrapping around
            key = key % 26;  // Assuming 26 letters in the alphabet

            // Shift the character by the key to the right (with wrapping)
            if (islower(c)) {
                c = 'a' + (c - 'a' + key) % 26;
            } else {
                c = 'A' + (c - 'A' + key) % 26;
            }
        }
        out.put(c);  // Write the modified or unchanged character to the output stream
    }
}

    /**
     * Implements the Caesar cipher.
     * @param in the stream containing the plaintext.
     * @param out the stream containing the ciphertext.
     * @param key the key used to shift the characters (leftward).
     */
void plaintext(istream& in, ostream& out, unsigned key){
    char a;
    while (in.get(a)) {
        if (isalpha(a)) {  // Check if the character is alphabetic
            // Adjust the key to handle wrapping around
            key = key % 26;  // Assuming 26 letters in the alphabet

            // Shift the character by the key to the left (with wrapping)
            if (islower(a)) {
                a = 'a' + (a - 'a' + 26 - key) % 26;
            } else {
                a = 'A' + (a - 'A' + 26 - key) % 26;
            }
        }
        out.put(a);  // Write the modified or unchanged character to the output stream
    }
}


}
