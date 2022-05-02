/******************************************************************************
** Program name : Lab 10
** Author : Jeffrey Ngo
** Date : 12 / 8 / 2019
** Description : Create a recursive function to find fibonacci number
** Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
******************************************************************************/

#ifndef FIBONACCIR_HPP
#define FIBONACCIR_HPP

class FibonacciR
{
public:
	FibonacciR(const int& n);
	virtual ~FibonacciR();
	void PrintFibonacci();

private:
	FibonacciR();
	int Fibonacci(const int& n);
	const int* n_;
};

#endif
