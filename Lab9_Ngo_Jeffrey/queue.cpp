/******************************************************************************
** Program name : Lab 9
** Author : Jeffrey Ngo
** Date : 12 / 1 / 2019
** Description : Get user input, add or remove values, print the buffer values
** length and average length
******************************************************************************/

#include "queue.hpp"
#include "validation.hpp"
#include <iostream>
#include <queue>
#include <ctime>
using std::cout;
using std::endl;
using std::cin;
using std::queue;

/*****************************************************************************
* Asks user for input to start simulation
* Generates random value to add to the buffer
* Generates random value to see if the value is added or a value is removed
* Print the buffer values, size, and average
*****************************************************************************/
void buffer()
{
	srand(time(NULL));
	queue<int> inQue;
	queue<int> temp;

	// Declare variables
	int rounds = 0;
	int percentAdd = 0;
	int percentRemove = 0;
	int N;
	int appending;
	int removing;
	double average = 0;
	double prevAvg;
	
	// Gets the input from user and checks if the input is valid
	cout << "Please enter a number for the amount rounds" << endl;
	rounds = validation(rounds);
	while (rounds <= 0)
	{
		cout << "Enter a positive number" << endl;
		rounds = validation(rounds);
	}
	// Gets the input from user and checks if the input is valid
	cout << "Please enter a percentage for the chance of adding a random "
		"number at the end of the buffer" << endl;
	percentAdd = validation(percentAdd);
	while (percentAdd < 0 || percentAdd > 100)
	{
		cout << "Enter a percent between 0 - 100" << endl;
		percentAdd = validation(percentAdd);
	}
	// Gets the input from user and checks if the input is valid
	cout << "Please enter a percentage for the chance of removing a random "
		 "number at the front of the buffer" << endl;
	percentRemove = validation(percentRemove);
	while (percentRemove < 0 || percentRemove > 100)
	{
		cout << "Enter a percent between 0 - 100" << endl;
		percentRemove = validation(percentRemove);
	}

	// Loop for the amount of rounds the user entered
	for (int i = 1; i <= rounds; i++)
	{
		// Print round
		cout << "Round: " << i << endl;
		cout << "-----------------------------------" << endl;

		// Generate random number for N, appending number, and removing number
		N = rand() % 1000 + 1;
		appending = rand() % 100 + 1;
		removing = rand() % 100 + 1;

		// If outcome is less than or equal to user input percentage
		// then add N to the queue
		if (appending <= percentAdd)
		{
			inQue.push(N);
			cout << N << " was added to the buffer" << endl;
		}
		else
		{
			cout << "Nothing was added to the buffer" << endl;
		}

		// If outcome is less than or equal to user input percentage
		// then remove front value
		if (removing <= percentRemove && !inQue.empty())
		{
			inQue.pop();
			cout << "Front value was removed from the buffer" << endl;
		}
		else
		{
			cout << "Nothing was removed from the buffer" << endl;
		}

		// Print the values of the buffer
		// Create a temp queue to print so it doesnt change the original
		temp = inQue;
		cout << "The values of the buffer are" << endl;
		while (!temp.empty())
		{
			cout << temp.front() << endl;
			temp.pop();
		}

		// Print length of the buffer
		cout << "The length of the buffer is" << endl;
		cout << inQue.size();
		cout << endl;

		// Print average length of the buffer
		prevAvg = average;
		average = (prevAvg*(i-1) + inQue.size())/i;
		cout << "The average length of the buffer is" << endl;
		cout << average << endl;
		cout << endl;

	}
}