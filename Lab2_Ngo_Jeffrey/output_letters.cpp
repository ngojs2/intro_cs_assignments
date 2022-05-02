/*****************************************************************************
** Program name: Lab 2
** Author: Jeffrey Ngo
** Date: 10/13/2019
** Description: Create a function that writes each letter and their frequency
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "count_letters.hpp"
#include "output_letters.hpp"


// Function to write output file
void output_letters(std::ofstream& fileOut, int* alpha)
{
	// Write alphabets frequencies to file
	for (int i = 0; i < 26; i++)
	{
		fileOut << char(i + 'a') << " : " << alpha[i] << std::endl;
	}
}
