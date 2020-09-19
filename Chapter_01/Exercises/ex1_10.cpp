/*
	Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
	there is a decrement operator (--) that subtracts 1. Use the decrement
	operator to write a while that prints the numbers from ten down to zero.
*/

#include <iostream>

int main()
{
	int value = 10;

	while(value >= 0)
	{
		std::cout << value << std::endl;
		value--;
	}


	return 0;
}