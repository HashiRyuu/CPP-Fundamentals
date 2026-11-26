/**
    @file overloaded_input.h
*/
#ifndef OVERLOADED_INPUT_H
#define OVERLOADED_INPUT_H
#include <string>

bool read(const std::string& prompt, int& n, bool ln=false);
bool read(const std::string& prompt, double& n, bool ln=false);
bool read(const std::string& prompt, std::string& s, bool ln=false);
bool read(char& c, char sentinel);

#endif
