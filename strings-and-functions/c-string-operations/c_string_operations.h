/**
    @file c_string_operations.h
    @author Stephen Gilbert
*/
#ifndef C_STRING_OPERATIONS_H
#define C_STRING_OPERATIONS_H

/**
 * Reverses the C-style string pointed to by s.
 *
 * @param s a pointer to the character in a C-style string.
 */
void reverse(char * s);

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
const char * findStr(const char *str1, const char *str2);


#endif
