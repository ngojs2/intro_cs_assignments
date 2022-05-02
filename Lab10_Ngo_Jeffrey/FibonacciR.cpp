/******************************************************************************
** Program name : Lab 10
** Author : Jeffrey Ngo
** Date : 12 / 8 / 2019
** Description : Create a recursive function to find fibonacci number
** Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
******************************************************************************/

#include "FibonacciR.hpp"
#include <iostream>

// Default constructor
FibonacciR::FibonacciR()
{
}

// Constructor with variables
FibonacciR::FibonacciR(const int& n) :n_(&n)
{
}

// Deconstructor
FibonacciR::~FibonacciR()
{
}

// Recursive function to find fibonacci number
/* Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
*/
int FibonacciR::Fibonacci(const int& n)
{
	// if n = 0, return 0
	if (n == 0)
	{
		return 0;
	}
	// If n = 1, return 1
	else if (n == 1)
	{
		return 1;
	}
	// Return fibonacci
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Function to print fibonacci number
void FibonacciR::PrintFibonacci()
{
	int FibonacciNum = Fibonacci(*n_);
	std::cout << *n_ << "th fibonacci number: " << FibonacciNum << std::endl;
}