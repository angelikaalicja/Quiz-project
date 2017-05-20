#ifndef OPERATINGFUNCTIONS_H
#define OPERATINGFUNCTIONS_H

#include <string>

class OperatingFunctions
{
public:
    OperatingFunctions();
    //void getInput(std::string& something);
    static std::string getInput();
    static void showOutput(std::string stringToPrint);
    static void showOutput(int intToPrint);
};

#endif // OPERATINGFUNCTIONS_H
