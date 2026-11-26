/**
    @file token_statistics.h
    @author Stephen Gilbert
*/
#ifndef TOKEN_STATISTICS_H
#define TOKEN_STATISTICS_H

#include <iostream>

/**
 * Counts the tokens on each line of input producing various statistics.
 * @param in the input stream to process.
 * @param out the output stream to write to.
 */
void tokenStats(std::istream& in, std::ostream& out);

#endif
