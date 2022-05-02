/*****************************************************************************
** Program name: Lab 1
** Author: Jeffrey Ngo
** Date: 10/6/2019
** Description: Prompt the user for all the numbers within the matrix
*****************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Asks user to enter values for matrix
void readMatrix(int** arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "Enter a number:" << endl;
			cin >> arr[i][j];
		}
	}
}