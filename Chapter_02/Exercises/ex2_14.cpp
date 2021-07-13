/**
 * Exercise 2.14: Is the following program legal? If so, what values are printed?
 */

// answer: It is legal, however it could confuse the user, because we print the
// local value 100 and the sumation using the for loop scope i (45)

#include <iostream>
int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;

	return 0;
}
