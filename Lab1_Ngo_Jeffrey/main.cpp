/*****************************************************************************
** Program name: Lab 1
** Author: Jeffrey Ngo
** Date: 10/6/2019
** Description: Asks user to choose matrix size, display matrix, 
**	calc determinant
*****************************************************************************/

#include <iostream>
#include "readMatrix.hpp"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// Variables
	char choice;
	int size;

	// Ask user to choose matrix size
	cout << "Choose 1 or 2 for the matrix size" << endl;
	cout << "1. 2x2 Matrix" << endl;
	cout << "2. 3x3 Matrix" << endl;

	cin >> choice;

	// If user chooses 1, matrix size 2x2
	if (choice == '1')
	{
		size = 2;
	}

	// If user chooses 2, matrix size 3x3
	else if (choice == '2')
	{
		size = 3;
	}

	// If user enters invalid choice
	else
	{
		cout << "Invalid choice." << endl;
		return 0;
	}

	// Pointer to an array
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
	}

	// Calls readMatrix function
	readMatrix(arr, size);

	// Calculate determinant 
	int value = determinant(arr, size);

	// Display the matrix
	cout << endl;
	cout << "The Matrix" << endl;
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
		{
			cout << arr[row][column] << " ";
		}
		cout << endl;
	}

	// Delete values
	for (int i = 0; i < size; i++)
	{
		delete[] arr[i];
	}

	// Delete original array
	delete[] arr;

	
	// Display the determinant
	cout << endl;
	cout << "The determinant is: " << value << endl;
	
	return 0;
}