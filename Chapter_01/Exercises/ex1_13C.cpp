/*
	Exercise 1.13: Write a program that prompts the user for two integers.
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


	// The initializer is not typed because it was asked at prompt
	for (; value1 <= value2; ++value1)
	{
		std::cout << value1 << " ";
	}


	std::cout << std::endl;

	return 0;
}