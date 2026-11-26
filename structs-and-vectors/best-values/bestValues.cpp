#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

// The structure (don't change these)
struct Camera {
    string manufacturer;
    string model;
    int releaseYear;
    int resolution;
    int weight;
    double price;
};

vector<string> bestValue(const vector<Camera>& v) {
    vector<string> result;
    double bestValue = 0.0;
    string currentManufacturer = v[0].manufacturer;
    string manufacturer, model;
    int releaseYear;
    double price;

    for (const Camera& camera : v) {
       double value = camera.resolution / camera.price;
       if (camera.manufacturer == currentManufacturer) {
            if (value > bestValue) {
                manufacturer = camera.manufacturer;
                model = camera.model;
                releaseYear = camera.releaseYear;
                price = camera.price;
                bestValue = value;
            }
        } else {
            if (bestValue != 0.0) {
                ostringstream oss;
                oss << manufacturer << ":" << model << ":$" 
                    << fixed << setprecision(2) << price;
                result.push_back(oss.str());
                bestValue = 0.0;
            }
            currentManufacturer = camera.manufacturer;
            if (value > bestValue) {
                manufacturer = camera.manufacturer;
                model = camera.model;
                releaseYear = camera.releaseYear;
                price = camera.price;
                bestValue = value;
            }
        }
    }

    // Check if the last camera was the best value
    if (bestValue != 0.0) {
        ostringstream oss;
        oss << manufacturer << ":" << model << ":$" 
            << fixed << setprecision(2) << price;
        result.push_back(oss.str());
    }

    return result;
}

////////////////// PUT ONLY YOUR FUNCTION ABOVE //////////////////////

template <typename T>
ostream& operator<<(ostream& out, const vector<T> v)
{
    out << "[";
    if (v.size())
    {
        out << v[0];
        for (size_t i = 1, len = v.size(); i < len; i++)
            out << ", " << v[i];
    }
    out << "]";
    return out;
}

int main()
{
    cout << "Testing bestValue" << endl;
    cout << "-------------------------------------------------------------" << endl;
    const vector<Camera> vCameras = {
        {"Agfa", "ePhoto 1280", 1997, 1024, 420, 179},
        {"Agfa", "ePhoto CL45", 2001, 1600, 270, 179},
        {"Canon", "PowerShot 350", 1997, 640, 320, 149},
        {"Canon", "PowerShot 600", 1996, 832, 460, 139},
        {"Canon", "PowerShot A10", 2001, 1280, 375, 139},
        {"Casio", "Exilim EX-P505", 2005, 2560, 275, 249},
        {"Casio", "Exilim EX-P600", 2004, 2816, 275, 249},
        {"Casio", "Exilim EX-P700", 2004, 3072, 275, 249},
        {"Epson", "PhotoPC 800", 1999, 1600, 280, 229},
        {"Epson", "PhotoPC L-500V", 2004, 2560, 200, 159},
        {"Epson", "PhotoPC 3000 Zoom", 2000, 2048, 360, 399},
        {"Fujifilm", "FinePix 40i", 2000, 2400, 200, 169},
        {"Fujifilm", "FinePix 50i", 2001, 2400, 200, 169},
        {"Fujifilm", "DS-260HD", 1999, 1280, 700, 169},
        {"Fujifilm", "DS-300", 1997, 1280, 700, 169},
        {"HP", "Photosmart 320", 2002, 1632, 240, 179},
        {"HP", "Photosmart 435", 2003, 2048, 190, 179},
        {"HP", "Photosmart 620", 2002, 1632, 280, 179},
    };
    
    vector<string> values = bestValue(vCameras);
    cout << "  Best value cameras" << endl;
    cout << "   -- Expect-> [Agfa:ePhoto CL45:$179.00, Canon:PowerShot A10:$139.00, Casio:Exilim EX-P700:$249.00, Epson:PhotoPC L-500V:$159.00, Fujifilm:FinePix 40i:$169.00, HP:Photosmart 435:$179.00]" << endl;
    cout << "   --  Found-> " << values << endl << endl;
    
    cout << endl;
    cout << "--done--" << endl << endl;
}
