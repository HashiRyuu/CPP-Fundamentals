/**
 *  @file image_class.cpp
 */
#include <string>
#include <cstring>
#include <iostream>
#include <stdexcept>
using namespace std;

#include "image_class.h"


// Constructor with file path
Image::Image(const std::string& path) {
    load(path); // Load image from file
}

// Constructor with width and height
Image::Image(unsigned width, unsigned height) : m_width(width), m_height(height) {
    m_pixels.resize(width * height); // Resize vector to hold pixels
}

// Accessor for image width
unsigned Image::width() const {
    return m_width;
}

// Accessor for image height
unsigned Image::height() const {
    return m_height;
}

// Accessor for total number of pixels in the image
unsigned Image::size() const {
    return m_pixels.size();
}

// Get pointer to the first pixel
Pixel* Image::begin() {
    if (m_pixels.empty())
        return nullptr; // Return nullptr if image is empty
    else
        return &m_pixels.front(); // Return pointer to first pixel
}

// Get pointer to the end of the image
Pixel* Image::end() {
    if (m_pixels.empty())
        return nullptr; // Return nullptr if image is empty
    else
        return &m_pixels.back() + 1; // Return pointer to end of image
}

// Fill the entire image with a given color
void Image::fill(const Pixel& color) {
    m_pixels.assign(m_pixels.size(), color);
}


// Load image from file
bool Image::load(const std::string& path) {
    int width, height, bpp;
    unsigned char* data = stbi_load(path.c_str(), &width, &height, &bpp, 4); // Load image using stb_image
    if (data != nullptr) {
        m_width = width; // Set image width
        m_height = height; // Set image height
        m_pixels.resize(width * height); // Resize vector to hold pixels
        std::memcpy(&m_pixels[0], data, m_pixels.size() * sizeof(Pixel)); // Copy pixel data to vector
        stbi_image_free(data); // Free memory allocated by stb_image
        return true; // Return true on success
    }
    return false; // Return false if image loading fails
}

// Save image to file
bool Image::save(const std::string& path) {
    size_t dotIndex = path.rfind('.'); // Find the last dot in the file path
    if (dotIndex == std::string::npos)
        return false; // Return false if file path is invalid

    std::string extension = path.substr(dotIndex + 1); // Extract file extension
    for (char& c : extension) {
        c = tolower(c); // Convert extension to lowercase
    }

    if (extension == "png") {
        // Save image as PNG
        return stbi_write_png(path.c_str(), m_width, m_height, 4, reinterpret_cast<const void*>(&m_pixels.front()), 4 * m_width);
    } else if (extension == "bmp") {
        // Save image as BMP
        return stbi_write_bmp(path.c_str(), m_width, m_height, 4, reinterpret_cast<const void*>(&m_pixels.front()));
    } else if (extension == "jpg" || extension == "jpeg") {
        // Save image as JPEG
        return stbi_write_jpg(path.c_str(), m_width, m_height, 4, reinterpret_cast<const void*>(&m_pixels.front()), 100);
    } else {
        return false; // Return false if file format is not supported
    }
}

// Usage example
void info(const string& msg, const Image& img);

int run_example()
{
    // Extra testing code for debugging
    // cout << "Part 1: construct three images" << endl;
    // Image empty;                    // empty image
    // Image square(20, 20);           // square image
    // Image lego("images/lego.png");  //  from file
    // cout << " -- Success" << endl;
    //
    // cout << "\nPart 2: print size, width, height" << endl;
    // info("empty", empty);
    // info("square", square);
    // info("lego", lego);
    //
    // cout << "\nPart 3: Modify some images" << endl;
    // bool ok = empty.load("images/paris.jpg");
    // string msg = "Loading paris into empty image. ";
    // msg += ok ? "Success." : "Failed.";
    // cout << msg << endl;
    // info("empty", empty);
    //
    // Pixel fillColor{255, 127};
    // square.fill(fillColor);
    //
    // cout << "\nPart 4: loop through an image in two ways." << endl;
    // for (auto& p : empty) // grayscale paris
    // {
    //     auto avg = (p.red + p.green + p.blue) / 3;
    //     p.red = p.green = p.blue = avg;
    // }
    // // Use an iterator loop to draw a cross on square
    // int cw = square.width() / 2;
    // int cv = square.size() / 2;
    // int i = 1;
    // for (auto itr = begin(square); itr != end(square); ++itr)
    // {
    //     if (i % cw == 0 || (i > cv - cw && i < cv + cw))
    //         *itr = GRAY;
    //     i++;
    // }
    //
    // cout << "\nPart 5: Save all the pictures." << endl;
    // auto parisOK = empty.save("actual/paris.png");
    // auto squareOK = square.save("actual/square.png");
    // auto legoOK = lego.save("actual/lego.jpg");
    // cout << "paris.png " << (parisOK ? "saved" : "failed") << endl;
    // cout << "square.png " << (squareOK ? "saved" : "failed") << endl;
    // cout << "lego.jpg " << (legoOK ? "saved" : "failed") << endl;

    return 0;
}

void info(const string& msg, const Image& img)
{
    cout << msg << ": size()->" << img.size()
        << ", width()->" << img.width()
        << ", height()->" << img.height() << endl;
}
