/**
 *  @file green_screen_compositing.cpp
 */
#include <string>
#include <iostream>
using namespace std;


#include "green_screen_compositing.h"

const int BPP = 4;
void greenScreen(unsigned char * const img, int width, int height) {
    unsigned char * p = img;
    unsigned char * end = img + width * height * 4;

    while (p != end) {
        if (*(p + 1) > 2 * max(*(p), *(p + 2))) {
            *(p) = 0; // Clearing red channel
            *(p + 1) = 0; // Clearing green channel
            *(p + 2) = 0; // Clearing blue channel
            *(p + 3) = 0; // Clearing alpha channel
        }
        p += 4;
    }
}

void composite( unsigned char * const bg,
                unsigned char * const fg,
                int width, int height)
{
    greenScreen(fg, width, height);

    unsigned char * dest = fg;
    unsigned char * src = bg;
    unsigned char * end = dest + width * height * 4;

    while(dest != end)
    {
        if (*(dest + 3) == 0) { // assuming the alpha channel is the 4th component
            // Copy pixel at src to dest
            *dest = *src;         // Red
            *(dest + 1) = *(src + 1);   // Green
            *(dest + 2) = *(src + 2);   // Blue
            *(dest + 3) = *(src + 3);   // Alpha
        }
        // Increment src and dest
        src += 4;
        dest += 4;
    }
}
