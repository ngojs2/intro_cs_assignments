/******************************************************************************
** Program name : Lab  7
** Author : Jeffrey Ngo
** Date : 11 / 17 / 2019
** Description : Menu function to print menu
******************************************************************************/


#include "menu.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Function to print menu
void menu()
{
	cout << "1. Add a new value to the back of queue" << endl;
	cout << "2. Display the front value (Head)" << endl;
	cout << "3. Remove the front node (Head)" << endl;
	cout << "4. Display the queue's content" << endl;
	cout << "5. Exit" << endl;

}
