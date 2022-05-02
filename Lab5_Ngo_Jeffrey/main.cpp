/******************************************************************************
** Program name : Lab  5
** Author : Jeffrey Ngo
** Date : 11 / 03 / 2019
** Description : Main function to start the program by calling all the 
** necessary functions
******************************************************************************/

#include "menu.hpp"
#include "first.hpp"
#include "second.hpp"
#include "third.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

// Input Validation function
int validation(int val)
{
	while (!(std::cin >> val))
	{
		std::cout << "Please select another number" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
	return val;
}

int main()
{
	// Declar variables
	int choice = 0;
	int inputNum = 0;
	int sum;
	int triNum = 0;
	int triSum;
	string inputString;
	int *intArray;

	// Loop for the menu
	do
	{
		// Call the menu function
		menu();
		// User choice
		choice = validation(choice);

		/*If user picks 1
		Ask the user to enter a string to print in reverse
		Use getline instead of cin to get multiple words
		cin.ignore to remove new line from buffer, otherwise it will skip the input*/
		if (choice == 1)
		{
			cout << "Please enter a string that you would like to print in reverse" << endl;
			cin.ignore();
			getline(cin, inputString);
			
			cout << "Here is the string that you wanted to print in reverse" << endl;
			// Call printStringReverse function
			printStringReverse(inputString);
			cout << endl;
			
		}

		/*If user picks 2
		Ask user how many numbers they want to add
		*/
		else if (choice == 2)
		{
			cout << "How many numbers would you like to add up" << endl;
			inputNum = validation(inputNum);
			// Input validation for negative numbers
			if (inputNum <= 0)
			{
				cout << "Invalid, Please select another number" << endl;
				inputNum = validation(inputNum);
			}

			// allocate memory
			intArray = new int[inputNum];

			cout << "You want to enter " << inputNum << " numbers" << endl;
			// Loop for user to enter the amount of numbers they chose 
			for (int i = 0; i < inputNum; i++)
			{
				cout << "Please enter a number" << endl;
				cin >> intArray[i];
				
			}
			// Call sumOfArrayInts to sum the numbers
			sum = sumOfArrayInts(intArray, inputNum);
			cout << "The sum of the numbers you chose is " << sum << endl;
			cout << endl;
			// Free memory
			delete[] intArray;
		}

		// If user picks 3
		// Ask the user to enter a number
		// Call function to calculate triangular number
		else if (choice == 3)
		{
			cout << "Please enter a number to calculate the triangular number" << endl;
			triNum = validation(triNum);

			//Input validation for negative numbers
			if (triNum <= 0)
			{
				cout << "Invalid, Please select another number" << endl;
				triNum = validation(triNum);
			}

			// Call the triangularNumber function to calculate the number
			triSum = triangularNumber(triNum);

			cout << "The triangular number of " << triNum << " is " << triSum << endl;
			cout << endl;
		}
	}

	while (choice != 4);
}

