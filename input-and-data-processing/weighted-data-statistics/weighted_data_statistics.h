/**
    @file weighted_data_statistics.h
    @author Stephen Gilbert
*/
#ifndef WEIGHTED_DATA_STATISTICS_H
#define WEIGHTED_DATA_STATISTICS_H

#include <string>

/**
 * Opens and processes the data sets in fileName.
 * Returns as a string the count and the average.
 * @param fileName name of the file.
 * @return the count and weighted average as formatted text.
 */
std::string dataSets(const std::string& fileName);

#endif
