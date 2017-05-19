#include "operating_functions.h"

#include <iostream>



void getInput(std::string& var)
{
	std::cin >> var;
}

void showOutput(std::string stringToPrint)
{
	std::cout << stringToPrint;
}

void showOutput(int intToPrint)
{
	std::cout << intToPrint;
}
