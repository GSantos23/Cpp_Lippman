// Exercise 1.12: What does the following for loop do? What is the final value
// of sum?

#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;

	std::cout << "Final value is " << sum << std::endl;

	return 0;
}

// Answer: Final value is 0