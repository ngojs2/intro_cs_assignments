/******************************************************************************
** Program name : Lab  5
** Author : Jeffrey Ngo
** Date : 11 / 03 / 2019
** Description : Recursive function to calculate the triangular number of the
** input number
******************************************************************************/

#include <iostream>
#include "third.hpp"
using std::string;
using std::cout;
using std::endl;

// Function to calculate the triangular number 
int triangularNumber(int N)
{
	// Base case
	// If number is 0, return
	if (N == 0)
	{
		return 0;
	}

	// Recursive function
	// -1 to get a smaller number before the previous or last number
	else
	{
		return N + triangularNumber(N - 1);
	}
}