/******************************************************************************
** Program name : Lab 10
** Author : Jeffrey Ngo
** Date : 12 / 8 / 2019
** Description : Create an iterative function to find fibonacci number
** Citatons:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
******************************************************************************/

#ifndef FIBONACCINR_HPP
#define FIBONACCINR_HPP

class FibonacciNR
{
public:
	FibonacciNR(const int& n);
	virtual ~FibonacciNR();
	void PrintFibonacci();
private:
	FibonacciNR();
	int Fibonacci(const int& n);
	const int* n_;
};
#endif
