/**
 *  @file array_transformation.cpp
 */
#include <string>
#include <stdexcept>
#include <iostream>
#include <algorithm>
using namespace std;


#include "array_transformation.h"

void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
    // Check if bSize is large enough
    if (bSize < aSize) {
        throw std::length_error("bSize must be at least equal to aSize");
    }

    size_t count = 0; // Number of even elements copied to b
    for (size_t i = 0; i < aSize; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (count < bSize) {
                b[count] = a[i];
                count++;
            } else {
                break; // Stop copying if b is full
            }
        }
    }

    // Update bSize to the actual number of elements copied
    bSize = count;
}

int cliqueCount(const int a[], size_t aSize)
{
    if (aSize == 0)
        return 0;

    int count = 0;
    for (size_t i = 0; i < aSize - 1; ++i)
    {
        if (a[i] == a[i + 1])
        {
            // If the current element is the same as the next one,
            // it's part of a clique
            count++;

            // Skip over all consecutive elements with the same value
            while (i < aSize - 1 && a[i] == a[i + 1])
                i++;
        }
    }

    return count;
}

void sevenEleven(int a[], size_t aSize)
{
    // Find the first 7
    int* sevenPtr = find(a, a + aSize, 7);

    for (int* elevenPtr = a; elevenPtr < a + aSize; ++elevenPtr) {
        if (*elevenPtr == 11) {
            // Swap the 11 with the number after the current 7
            swap(*(sevenPtr + 1), *elevenPtr);

            // Move to the next 7
            sevenPtr = find(sevenPtr + 1, a + aSize, 7);
            if (sevenPtr == a + aSize) {
                // If there are no more 7s, we're done
                break;
            }
        }
    }
}
