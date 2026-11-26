/**
 *  @file weighted_data_statistics.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;


#include "weighted_data_statistics.h"

string dataSets(const std::string& filename) {
    ostringstream result;

    ifstream file(filename);
    if (!file.is_open()) {
        result << filename << " cannot be opened.";
    }


    int dataSetCount = 1; // Initialize data set to 1
    string line;

    while (true) {
        int repeat;
        file >> repeat; // Read repeat number

        if (file.fail()) break; // Exit loop if input fails

        double sum = 0.0;
        int count = 0;
        double value;

        while (repeat != 0) {
            file >> value;
            sum += value * repeat;
            count += repeat;
            file >> repeat;
        }

        double average = sum / count;
        if(dataSetCount > 1){
            result << "\n";
        }
        result << "data set " << dataSetCount << ": total values = " << count << "\n"
         << "average value = " << fixed << setprecision(4) << average << "\n";

        dataSetCount++; // Update data set

        if (file.eof()) break; // Exit loop if end of file
    }

    file.close();
    return result.str();
}
