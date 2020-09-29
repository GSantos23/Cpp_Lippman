/*  Exercise 1.13A: Write a program that uses a for to sum the numbers from
	50 to 100.
*/

#include <iostream>

int main()
{
	int sum = 0;

	for(int number = 50; number <= 100; ++number)
		sum += number;

	std::cout << "The result is " << sum << std::endl;

	return 0;
}

