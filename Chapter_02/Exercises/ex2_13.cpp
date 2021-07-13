/**
 * Exercise 2.13: What is the value of j in the following program?
 * 
int i = 42;
int main()
{
	int i = 100;
	int j = i;
}

*/

// asnwer: 100, because it is inside the main scope

#include <iostream>
int i = 42;
int main()
{
	int i = 100;
	int j = i;

	std::cout << j << std::endl;

	return 0;
}

