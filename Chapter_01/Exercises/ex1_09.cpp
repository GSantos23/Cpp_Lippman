/*  Exercise 1.9: Write a program that uses a while to sum the numbers from
	50 to 100.
*/

#include <iostream>

int main()
{
	int sum = 0 , number = 50;

	while(number <= 100)
	{
		sum += number;
		number++;
	}

	std::cout << "The result is " << sum << std::endl;

	return 0;
}
