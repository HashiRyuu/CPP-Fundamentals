/**
    @file template_string_conversion.h
*/
#ifndef TEMPLATE_STRING_CONVERSION_H
#define TEMPLATE_STRING_CONVERSION_H
#include <string>
#include <sstream>
#include <iomanip>
#include <typeinfo>

#if __cplusplus <= 201103L // Check for early versions of C++
template <typename T>
std::string to_string(const T& n)
{
    std::ostringstream out;
    out << std::fixed << n;
    return out.str();
}
#endif // End of __cplusplus check
#endif
