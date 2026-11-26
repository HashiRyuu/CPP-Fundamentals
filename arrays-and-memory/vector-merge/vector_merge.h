/**
    @file vector_merge.h
    @author Stephen Gilbert
*/
#ifndef VECTOR_MERGE_H
#define VECTOR_MERGE_H

#include <vector>
/**
    Merges two sorted vectors by interleaving their elements.
    The resulting vector is also in sorted order.
    If different sizes, elements from the longer vector
    appear at the end.

    @param a the first vector.
    @param b the second vector.
    @return the merged vector.
*/
std::vector<int> merge(const std::vector<int>& a,
                       const std::vector<int>& b);

#endif
