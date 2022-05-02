/******************************************************************************
** Program name : Lab 9
** Author : Jeffrey Ngo
** Date : 12 / 1 / 2019
** Description : Check for valid inputs
******************************************************************************/

#include "validation.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

// Input Validation function
int validation(int valid)
{
	while (!(std::cin >> valid) || cin.get() != '\n')
	{
		std::cout << "Please select a number" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
	return valid;
}
