/*
	Exercise 1.19: 

	Revise the program you wrote for the exercises in § 1.4.1 that printed a 
	range of numbers so that it handles input in which the first number is 
	smaller than the second.


	Write a program that prompts the user for two integers.
	Print each number in the range specified by those two integers.
 */

#include <iostream>

int main()
{
	int value1 = 0, value2 = 0;
	int tmp = 0;

	std::cout << "Enter lower limit: ";
	std::cin >> value1;
	std::cout << "Enter upper limit: ";
	std::cin >> value2;

	// If user add a bigger number for value 1 that value 2
	if (value1 > value2)
	{
		std::cout << "Changing values...." << std::endl;
		tmp = value2;
		value2 = value1;
		value1 = tmp;
	}

	std::cout << "The range of values are now displayed...." << std::endl;

	while(value1 <= value2)
	{
		std::cout << value1 << " ";
		value1++;
	}

	std::cout << std::endl;

	return 0;
}