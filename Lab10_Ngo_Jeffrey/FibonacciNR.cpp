/******************************************************************************
** Program name : Lab 10
** Author : Jeffrey Ngo
** Date : 12 / 8 / 2019
** Description : Create an iterative function to find fibonacci number
** Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
******************************************************************************/

#include "FibonacciNR.hpp"
#include <iostream>

// Default constructor
FibonacciNR::FibonacciNR()
{
}

// Constructor with variables
FibonacciNR::FibonacciNR(const int& n) :n_(&n)
{
}

// Deconstructor
FibonacciNR::~FibonacciNR()
{
}

// Iterative function to find fibonacci number
// Loop until counter reaches n
/* Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
*/
int FibonacciNR::Fibonacci(const int& n)
{
	// Declare variables
	int first = 0;
	int second = 1;
	int counter = 2;

	//Loop until counter reaches n
	while (counter < n)
	{
		int temp = second;
		second = first + second;
		first = temp;
		++counter;
	}
	// If n = 0, return 0
	if (n == 0)
	{
		return 0;
	}
	// If n = 1, return 1, (0 + 1) = 1
	else
	{
		return first + second;
	}
}

// Function to print fibonacci number
void FibonacciNR::PrintFibonacci()
{
	const int result = Fibonacci(*n_);
	std::cout << *n_ << "th fibonnaci number: " << result << std::endl;
}


