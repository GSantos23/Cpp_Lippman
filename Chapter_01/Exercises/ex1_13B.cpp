/*
	Exercise 1.13B: In addition to the ++ operator that adds 1 to its operand,
	there is a decrement operator (--) that subtracts 1. Use the decrement
	operator to write a for that prints the numbers from ten down to zero.
*/

#include <iostream>

int main()
{

	for (int value = 10; value >= 0; --value)
	{
		std::cout << value << std::endl;
	}

	return 0;
}