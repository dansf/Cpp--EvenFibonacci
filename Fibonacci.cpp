#include <iostream>
#include "Fibonacci.h"

void Fibonacci::PrintFibonacciPattern(int number) {
	unsigned int numOne = 0;
	unsigned int numTwo = 1;
	unsigned int sum = 0;
	unsigned int pares = 0;

	while (sum < number) {
		sum = numOne + numTwo;
		numOne = numTwo;
		numTwo = sum;

		if (sum > number)
			break;

		if (numTwo % 2 == 0) {
			pares += sum;
			std::cout << " " << pares;
		}
	}
}

int Fibonacci::PrintFibonacciSum(int number) {
	// The code needs to reach the base case, wich is the return of
	if (number < 1) return number;
	return (PrintFibonacciSum(number - 1) + PrintFibonacciSum(number - 2));
}
