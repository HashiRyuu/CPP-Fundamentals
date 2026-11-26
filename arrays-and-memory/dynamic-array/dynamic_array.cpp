/**
 *  @file dynamic_array.cpp
 */
#include <string>
#include <iostream>
#include <memory>
#include <sstream>
using namespace std;


#include "dynamic_array.h"

FlexArray& readData(std::istream& in, FlexArray& a)
{
    size_t capacity = INITIAL_CAPACITY;
    int* b = new int[capacity];
    int value;
    size_t size = 0;

    while (in >> value)
    {
        if (size == capacity)
        {
            // Resize the array to double the capacity
            capacity *= 2;
            int* temp = new int[capacity];

            // Copy elements from old array to new array
            for (size_t i = 0; i < size; ++i)
            {
                temp[i] = b[i];
            }

            // Delete the old array
            delete[] b;

            // Move the new array into b
            b = temp;
        }

        // Store the value in the array
        b[size++] = value;
    }

    // Create a new array with exactly the right size
    int* data = new int[size];
    for (size_t j = 0; j < size; ++j)
    {
        data[j] = b[j];
    }

    // Delete the temporary array
    delete[] b;

    // Update FlexArray
    delete[] a.m_data; // Delete old data
    a.m_data = data;
    a.m_size = size;

    return a;
}

/**
 * Return a string representation of a FlexArray.
 * @param a the array to represent.
 * @return a comma separated, brace delimited contents.
 */
std::string toString(const FlexArray& a) {
    std::stringstream ss;
    ss << "{";
    if (a.m_size > 0) {
        ss << a.m_data[0];
        for (size_t i = 1; i < a.m_size; ++i) {
            ss << ", " << a.m_data[i];
        }
    }
    ss << "}";
    return ss.str();
}

#include <iostream>
#include <sstream>
int main()
{

    istringstream in("8 9 Q 4 5");
    FlexArray a;
    in >> a;
    cout << "a->" << a << endl;

    return 0;
}
