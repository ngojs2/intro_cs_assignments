/******************************************************************************
** Program name : Lab  7
** Author : Jeffrey Ngo
** Date : 11 / 17 / 2019
** Description : Main function that calls other functions to start program
** Calls menu, asks for user input, then calls the selected function.
** Contains input validation
******************************************************************************/

#include "menu.hpp"
#include "queue.hpp"
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

int main()
{
	// Declare variables
	int choice = 0;
	bool exit = false;
	Queue list;
	int val = 0;


	// Loop for the menu
	// Call function depending on selection
	// Add head
	// Delete head
	// Print list values and head value
	while (exit == false)
	{
		menu();
		choice = validation(choice);
		switch (choice)
		{

		// Call function to add to the back of queue
		case 1:
		{
			cout << "Enter a positive number to add to the back of queue" << endl;
			val = validation(val);
			// Check if input is positive
			while (val <= 0)
			{
				cout << "Enter a positive number" << endl;
				val = validation(val);
			}
			list.addBack(val);
			cout << endl;
			break;
		}

		// Call function to get head node value
		case 2:
		{
			cout << "The head node value is:" << endl;
			list.getFront();
			cout << endl;
			break;
		}

		// Call function to remove head node
		case 3:
		{
			list.removeFront();
			cout << endl;
			break;
		}

		// Call function to print queue
		case 4:
		{
			cout << "Your queue is:" << endl;
			list.printQueue();
			cout << endl;
			break;
		}

		// Exit 
		case 5:
		{
			cout << "Exiting Queue" << endl;
			exit = true;
			break;
		}

		// Print invalid input
		default:
		{
			cout << "Please enter a number 1-5" << endl;
		}
		}
	}
}