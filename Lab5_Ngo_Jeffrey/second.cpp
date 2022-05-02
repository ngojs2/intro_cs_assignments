/******************************************************************************
** Program name : Lab  5
** Author : Jeffrey Ngo
** Date : 11 / 03 / 2019
** Description : Recursive function to calculate the sum of numbers in an array
******************************************************************************/

#include <iostream>
#include "second.hpp"
using std::string;
using std::cout;
using std::endl;

//Function to calculate the sum of numbers in array
int sumOfArrayInts(int *array, int numbers)
{
	//Base case 
	//If number reaches 0, return
	if (numbers == 0)
	{
		return 0;
	}

	// Recursive function
	// Find recursive sum of the numbers in the array
	// Adds the numbers in the array to the last number
	// -1 to get to the other number from the previous last number
	else
	{
		return (sumOfArrayInts(array, numbers - 1) + array[numbers - 1]);
	}

}