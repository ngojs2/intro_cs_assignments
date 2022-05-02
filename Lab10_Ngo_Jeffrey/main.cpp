/******************************************************************************
** Program name : Lab 10
** Author : Jeffrey Ngo
** Date : 12 / 8 / 2019
** Description : Compare the time it takes to find fibonacci number between
** the iterative and recursive functions.
** Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
http://www.cplusplus.com/reference/ctime/clock/
******************************************************************************/

#include "FibonacciR.hpp"
#include "FibonacciNR.hpp"
#include <time.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

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

// Call the iterative function and recursive function
// Calculate the time for each function to find fibonacci number
/* Citatons: ******************************************************************
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
http://www.cplusplus.com/reference/ctime/clock/
******************************************************************************/
int main()
{
	// Declare variables
	unsigned long long int n = 0;
	clock_t recTime, nonRecTime;
	int choice = 0;

	// Menu
	cout << "1. Start Fibonacci implementation" << endl;
	cout << "2. Exit" << endl;
	cin >> choice;

	// Do while loop to enter new number to find until exit
	do
	{
		// User input
		cout << "Please enter a number 1-45" << endl;
		n = validation(n);

		// Additional input validation
		while (n < 0 || n > 45)
		{
			cout << "Please enter a number 1-45" << endl;
			n = validation(n);
		}

		if (n >= 0 && n <= 45)
		{
			cout << "Finding " << n << "th" << " fibonacci number" << endl;
			cout << "Using the iterative fibonacci implementation" << endl;
			// Start clock
			nonRecTime = clock();
			FibonacciNR fnr(n);
			fnr.PrintFibonacci();
			// Calculate time taken
			nonRecTime = clock() - nonRecTime;
			// Print time in seconds
			cout << "Time: " << nonRecTime / (double)(CLOCKS_PER_SEC) << endl;
			cout << endl;

			
			cout << "Finding " << n << "th" << " fibonacci number" << endl;
			cout << "Using the recursive fibonacci implementation" << endl;
			// Start clock
			recTime = clock();
			FibonacciR fr(n);
			fr.PrintFibonacci();
			// Calculate time taken
			recTime = clock() - recTime;
			// Print time in seconds
			cout << "Time: " << recTime / (double)(CLOCKS_PER_SEC) << endl;
			cout << endl;
		}

		// Enter a new number to find
		cout << "Do you want to enter a new number?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. Exit" << endl;
		choice = validation(choice);

		// Input validation
		while (choice != 1 && choice != 2)
		{
			cout << "Please select 1 or 2" << endl;
			choice = validation(choice);
		}

	} while (choice == 1);
	return 0;
	
}

