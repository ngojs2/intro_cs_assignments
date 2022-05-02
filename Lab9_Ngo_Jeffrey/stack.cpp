/******************************************************************************
** Program name : Lab 9
** Author : Jeffrey Ngo
** Date : 12 / 1 / 2019
** Description : Get user input and push that input into a stack and print
** the stack
******************************************************************************/

#include <iostream>
#include <string>
#include <stack>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stack;

/*****************************************************************************
* Get user input for the word
* Push the word into the stack
* Print the stack
*****************************************************************************/
void palindrome()
{
	string word;
	stack<char> inStack;

	// Get user input
	cout << "Please enter a string" << endl;
	cin >> word;

	cout << "Palindrome" << endl;
	cout << "---------------------------" << endl;
	// Push letters into the stack
	// Print letters
	for (int i = 0; i < word.size(); i++)
	{
		inStack.push(word[i]);
		cout << word[i];
	}
	// Print the stack starting with the top
	// Pop to remove top to get to the next value
	while (!inStack.empty())
	{
		cout << inStack.top();
		inStack.pop();
	}
	cout << endl;
	cout << endl;

}