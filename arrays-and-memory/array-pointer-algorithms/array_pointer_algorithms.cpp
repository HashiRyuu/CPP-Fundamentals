/**
 *  @file array_pointer_algorithms.cpp
 */
#include <string>
#include <iostream>
using namespace std;


#include "array_pointer_algorithms.h"

int alternatingSum(const int a[], size_t size)
{
    if (size == 0) return 0; // Return 0 if size is 0 (empty array)
    else if (size == 1) return a[0]; // Return the only element if size is 1
    else if (size == 2) return a[0] - a[1]; // Return the difference if size is 2

    int sum = 0;
    bool switchSign = false;
    for(size_t i = 0; i < size; ++i)
    {
        if(!switchSign)
        {
            sum += a[i];
            switchSign = true;
        }else
        {
            sum -= a[i];
            switchSign = false;
        }
    }
    return sum;
}

MinMax minMax(const double *ptr, size_t size)
{
    MinMax e;
    if (size == 0) // Handle empty array
        return e;

    e.min = ptr; // Initialize min and max to the first element
    e.max = ptr;

    for (size_t i = 1; i < size; i++)
    {
        if (ptr[i] > *(e.max))
        {
            e.max = &ptr[i]; // Update max if current element is greater
        }
        else if (ptr[i] < *(e.min))
        {
            e.min = &ptr[i]; // Update min if current element is smaller
        }
    }

    return e;
}

bool sameSet(const int *aBeg, const int *aEnd,
             const int *bBeg, const int *bEnd)
{
    bool check = false;
    // Determine which array is larger
    bool aIsLarger = (aEnd - aBeg) > (bEnd - bBeg);

    if (aIsLarger) {
        auto begin = bBeg;
        while(aBeg < aEnd)
        {
            while(bBeg < bEnd)
            {
                if(*aBeg == *bBeg)
                {
                    check = true;
                    break;
                }
                else
                {
                    check = false;
                }
                bBeg++;
            }
            if(!check){
                check = false;
                break;
            }
            aBeg++;
            bBeg = begin;
        }
    } else {
        auto begin = aBeg;
        while(bBeg < bEnd)
        {
            while(aBeg < aEnd)
            {
                if(*bBeg == *aBeg)
                {
                    check = true;
                    break;
                }
                else
                {
                    check = false;
                }
                aBeg++;
            }
            if(!check){
                check = false;
                break;
            }
            bBeg++;
            aBeg = begin;
        }
    }

    return check;
}
