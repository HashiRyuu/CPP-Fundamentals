/**
    @file validated_input.h
*/
#ifndef VALIDATED_INPUT_H
#define VALIDATED_INPUT_H

#include <string>

std::string getLine(const std::string& prompt="");
int getInt(const std::string& prompt="");
double getReal(const std::string& prompt="");
bool getYN(const std::string& prompt="");


#endif
