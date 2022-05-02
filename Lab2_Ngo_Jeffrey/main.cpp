/*****************************************************************************
** Program name: Lab 2
** Author: Jeffrey Ngo
** Date: 10/13/2019
** Description: Implement a program that reads a file and count the letter
** frequencies.
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include "count_letters.hpp"
#include "output_letters.hpp"


int main()
{
	// Declare variables
	std::ifstream fileIn;
	std::ofstream fileOut;

	std::string inFileName;
	std::string outFileName;

	int paraNum = 1;
	int alpha[26] = { 0 };

	// Ask user to enter name of file to open
	std::cout << "Please enter the name of file you would like to open."
		<< std::endl;
	// User input
	std::cin >> inFileName;

	// Open input file
	fileIn.open(inFileName.c_str(), std::ios::in);
	
	// If file can not open, display error
	if (!fileIn)
	{
		std::cout << "File could not be opened." << std::endl;
		return 1;
	}
	
	// If file can open, read
	while (fileIn)
	{
		// Count letter function call
		count_letters(fileIn, alpha);

		// Ask user to create output file
		std::cout << "Please enter a name for the output file of Paragraph "
			<< paraNum << std::endl;
		// User input
		std::cin >> outFileName;

		// Paragraph counter
		paraNum = paraNum + 1;

		// Open output file
		fileOut.open(outFileName.c_str(), std::ios::out);

		// If file can not open, display error
		if (!fileOut)
		{
			std::cout << "Can not open output file." << std::endl;
			return 2;
		}

		// Output letter function call
		output_letters(fileOut, alpha);

		// Close output file
		fileOut.close();
	}
	
	// Close inputfile
	fileIn.close();
	
	return 0;
}
