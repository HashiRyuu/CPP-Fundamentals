/**
 *  @file vector_merge.cpp
 */
#include <vector>
#include <string>
using namespace std;


#include "vector_merge.h"

vector<int> merge(const vector<int>& a, const vector<int>& b) {
    vector<int> merged;
    size_t i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements from vector a
    while (i < a.size()) {
        merged.push_back(a[i]);
        i++;
    }

    // Add remaining elements from vector b
    while (j < b.size()) {
        merged.push_back(b[j]);
        j++;
    }

    return merged;
}
