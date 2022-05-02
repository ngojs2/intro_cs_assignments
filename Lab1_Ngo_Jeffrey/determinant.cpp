/*****************************************************************************
** Program name: Lab 1
** Author: Jeffrey Ngo
** Date: 10/6/2019
** Description: Calculate the determinant for each matrix sizes
*****************************************************************************/

#include <iostream>
#include "readMatrix.hpp"
#include "determinant.hpp"

using std::cout;
using std::cin;
using std::endl;

int determinant(int** arr, int size)
{
	// Variable
	int detCalc = 0;

	if (size == 2)
	{
		// Size 2x2 matrix equation
		detCalc = ((arr[0][0]) * (arr[1][1])) - ((arr[0][1]) * (arr[1][0]));
	}

	else if (size == 3)
	{
		// Size 3x3 matrix equation
		detCalc = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])
			- arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])
			+ arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

	}

	return detCalc;
}