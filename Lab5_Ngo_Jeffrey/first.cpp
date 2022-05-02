/******************************************************************************
** Program name : Lab  5
** Author : Jeffrey Ngo
** Date : 11 / 03 / 2019
** Description : Recursive function to print a string in reverse
******************************************************************************/

#include <string>
#include <iostream>
#include "first.hpp"
using std::string;
using std::cout;
using std::endl;

// Recursive function to print the input string in reverse
void printStringReverse(string inputString)
{
	// Base case
	// Return if the string is empty
	if (inputString.size() == 0)
	{
		cout << endl;
		return;
	}

	/* Print the last character of the string 
	Substring to pass to the function again
	Print until the first character is reached*/
	else
	{
		cout << inputString[inputString.size() - 1];
		printStringReverse(inputString.substr(0, inputString.size() - 1));
	}
}