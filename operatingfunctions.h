#ifndef OPERATINGFUNCTIONS_H
#define OPERATINGFUNCTIONS_H

#include <string>

class OperatingFunctions
{
public:
    OperatingFunctions();
    static std::string getInput();
    static void showOutput(const std::string& stringToPrint);
    static void showOutput(const int& intToPrint);
};

#endif // OPERATINGFUNCTIONS_H
