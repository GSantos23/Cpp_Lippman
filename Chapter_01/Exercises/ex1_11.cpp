/*
	Exercise 1.11: Write a program that prompts the user for two integers.
	Print each number in the range specified by those two integers.
 */

#include <iostream>

int main()
{
	int value1 = 0, value2 = 0;

	std::cout << "Enter lower limit: ";
	std::cin >> value1;
	std::cout << "Enter upper limit: ";
	std::cin >> value2;

	std::cout << "The range of values are now displayed...." << std::endl;

	while(value1 <= value2)
	{
		std::cout << value1 << " ";
		value1++;
	}

	std::cout << std::endl;

	return 0;
}