/**
    @file word_file_reader.h
    @author Stephen Gilbert
*/
#ifndef WORD_FILE_READER_H
#define WORD_FILE_READER_H
#include <vector>
#include <string>
/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */
std::vector<std::string> fileToWords(const std::string& filename);

#endif
