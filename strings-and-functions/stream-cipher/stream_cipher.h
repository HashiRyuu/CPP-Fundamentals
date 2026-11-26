/**
 * @file stream_cipher.h
 * @author Stephen Gilbert
 */
#ifndef ENCRYPT_H
#define ENCRYPT_H
#include <iostream>

/**
 * Namespace for stream cipher functions
 */
namespace enc {

    /**
     * Implements the Caesar cipher.
     * @param in the stream containing the plaintext.
     * @param out the stream containing the ciphertext.
     * @param key the key used to shift the characters (rightward).
     */
    void cipher(std::istream& in, std::ostream& out, unsigned key);

    /**
     * Implements the Caesar cipher.
     * @param in the stream containing the plaintext.
     * @param out the stream containing the ciphertext.
     * @param key the key used to shift the characters (leftward).
     */
    void plaintext(std::istream& in, std::ostream& out, unsigned key);
};

#endif
