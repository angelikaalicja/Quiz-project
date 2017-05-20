#include "operatingfunctions.h"

#include <iostream>

OperatingFunctions::OperatingFunctions()
{

}

// void OperatingFunctions::getInput(std::string& var)
// {
// 	std::cin >> var;
// }

std::string OperatingFunctions::getInput()
{
	std::string var;
	std::cin >> var;
	return var;
}

void OperatingFunctions::showOutput(std::string stringToPrint)
{
	std::cout << stringToPrint;
}

void OperatingFunctions::showOutput(int intToPrint)
{
	std::cout << intToPrint;
}
