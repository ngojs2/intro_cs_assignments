/******************************************************************************
** Program name : Lab 9
** Author : Jeffrey Ngo
** Date : 12 / 1 / 2019
** Description : Loops for the menu and calls the function depending on users
** choice
******************************************************************************/

#include "menu.hpp"
#include "queue.hpp"
#include "stack.hpp"
#include "validation.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// Declare variables
	int choice = 0;
	bool exit = false;

	// Loop for the menu
	// Call function to start simulation
	// Call function palindrome
	while (exit == false)
	{
		menu();
		choice = validation(choice);
		switch (choice)
		{
		// Call buffer function to start simulation
		case 1:
		{
			buffer();
			break;
		}

		// Call function palindrome 
		case 2:
		{
			palindrome();
			break;
		}

		// Exit 
		case 3:
		{
			cout << "Exiting" << endl;
			exit = true;
			break;
		}

		// Print invalid input
		default:
		{
			cout << "Please enter a number 1-3" << endl;
		}
		}
	}
}