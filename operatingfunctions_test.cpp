#include "operatingfunctions.h"

#include <iostream>

OperatingFunctions::OperatingFunctions()
{

}

std::string globalReturn;

std::string OperatingFunctions::getInput()
{
	return globalReturn;
}


void OperatingFunctions::showOutput(const std::string& stringToPrint)
{
	std::cout << stringToPrint;
}

void OperatingFunctions::showOutput(const int& intToPrint)
{
	std::cout << intToPrint;
}
