/**
 *  @file image_flip_mirror.cpp
 */
#include <string>
#include <iostream>
using namespace std;


#include "image_flip_mirror.h"


/**
 * Flips the image.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * @param the direction to flip the image.
 * Assume 4 bytes per pixel
 */
void flip(UC* const img, int width, int height, Direction dir)
{
    // Define a Pixel pointer type alias
    Pixel* const imgPixels = reinterpret_cast<Pixel*>(img);

    if(dir == Direction::LtoR || dir == Direction::RtoL){
        for (int row = 0; row < height; ++row) {
            Pixel* front = imgPixels + row * width;
            Pixel* back = imgPixels + (row + 1) * width - 1; // last pixel in the row

            while (front < back) {
                // Swap the pixels using a temporary variable
                Pixel temp = *front;
                *front = *back;
                *back = temp;

                // Move front pointer forward and back pointer backward
                ++front;
                --back;
            }
        }
    } else if(dir == Direction::TtoB || dir == Direction::BtoT) {
        for (int col = 0; col < width; ++col) {
            Pixel* top = imgPixels + col;
            Pixel* bottom = imgPixels + (height - 1) * width + col; // last pixel in the column

            while (top < bottom) {
                // Swap the pixels using a temporary variable
                Pixel temp = *top;
                *top = *bottom;
                *bottom = temp;

                // Move top pointer down and bottom pointer up
                top += width;
                bottom -= width;
            }
        }
    }
}

/**
 * Mirror's the image.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * @param the direction to mirror the image.
 * Assume 4 bytes per pixel
 */
void mirror(UC* const img, int width, int height, Direction dir)
{
    Pixel* const imgPixels = reinterpret_cast<Pixel*>(img);

    if (dir == Direction::LtoR) {
        for (int row = 0; row < height; ++row) {
            Pixel* front = imgPixels + row * width;
            Pixel* back = imgPixels + (row + 1) * width - 1; // last pixel in the row

            while (front < back) {
                *back = *front;
                ++front;
                --back;
            }
        }
    } else if (dir == Direction::RtoL) {
        for (int row = 0; row < height; ++row) {
            Pixel* front = imgPixels + row * width;
            Pixel* back = imgPixels + (row + 1) * width - 1; // last pixel in the row

            while (front < back) {
                *front = *back;
                ++front;
                --back;
            }
        }
    }else if(dir == Direction::TtoB) {
        for (int col = 0; col < width; ++col) {
            Pixel* top = imgPixels + col;
            Pixel* bottom = imgPixels + (height - 1) * width + col; // last pixel in the column

            while (top < bottom) {
                // Swap the pixels using a temporary variable
                *bottom = *top;

                // Move top pointer down and bottom pointer up
                top += width;
                bottom -= width;
            }
        }
    }else if(dir == Direction::BtoT){
        for (int col = 0; col < width; ++col) {
            Pixel* top = imgPixels + col;
            Pixel* bottom = imgPixels + (height - 1) * width + col; // last pixel in the column

            while (top < bottom) {
                // Swap the pixels using a temporary variable
                *top = *bottom;

                // Move top pointer down and bottom pointer up
                top += width;
                bottom -= width;
            }
        }
    }
}
