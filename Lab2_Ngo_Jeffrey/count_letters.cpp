/*****************************************************************************
** Program name: Lab 2
** Author: Jeffrey Ngo
** Date: 10/13/2019
** Description: Create a function that the frequencies of each letter
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "count_letters.hpp"
#include "output_letters.hpp"


//Function to count letters
void count_letters(std::ifstream& fileIn, int* alpha)
{
	//Declare variables
	char ch;
	int j = 0;

	// Set value to 0
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = 0;
	}

	//Read the file
	ch = fileIn.get();
	while (ch != '\n' && ch != EOF)
	{
		// Count lowercase letters
		if (ch >= 'a' && ch <= 'z')
		{
			j = ch - 'a';
			alpha[j]++;
		}

		// Count uppercase letters
		else if (ch >= 'A' && ch <= 'Z')
		{
			j = ch - 'A';
			alpha[j]++;
		}
		// Read another character
		ch = fileIn.get();
	}
}

