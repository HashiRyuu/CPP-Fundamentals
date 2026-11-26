/**
 *  @file c_string_operations.cpp
 */
#include <string>
#include <iostream>
using namespace std;


#include "c_string_operations.h"

void reverse(char * s)
{
    char *start = s;
    char *end = s;

    // Move end to the end of the string
    while (*end != '\0') {
        end++;
    }
    end--; // Adjust to the last character before the null terminator

    // Swap characters from start and end
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start++;
        end--;
    }
}

/**
 * Finds the first occurrence of str2 which appears in str1.
 * Returns a pointer to the first occurrence of str2 in str1.
 * If no match is found, then a null pointer is returned.
 * If str2 points to a string of zero length, then the argument str1 is returned.
 *
 * @param str1 C-string to search through.
 * @param str2 C-string to search for.
 * @return
 */
const char * findStr(const char *str1, const char *str2)
{
    const char *ptr1 = str1;
    const char *ptr2 = str2;

    while (*ptr1 != '\0')
    {
        const char *temp1 = ptr1;
        const char *temp2 = ptr2;
        while (*temp1 == *temp2 && *temp1 != '\0' && *temp2 != '\0')
        {
            temp1++;
            temp2++;
        }
        if (*temp2 == '\0')
        {
            return ptr1;
        }
        ptr1++;
    }

    return nullptr;
}
