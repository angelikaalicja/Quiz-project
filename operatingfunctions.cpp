#include "operatingfunctions.h"

#include <iostream>

OperatingFunctions::OperatingFunctions()
{

}

std::string OperatingFunctions::getInput()
{
	std::string var;
	std::cin >> var;
	return var;
}

void OperatingFunctions::showOutput(const std::string& stringToPrint)
{
	std::cout << stringToPrint;
}

void OperatingFunctions::showOutput(const int& intToPrint)
{
	std::cout << intToPrint;
}
