/** Exercise 2.20: What does the following program do? **/

#include <iostream>

int main()
{
	// assign 42 to i
	int i = 42;
	// p1 is a pointer to int for the address of i
	int *p1 = &i;
	// an operation involving the content of p1 (42 * 42)
	*p1 = *p1 * *p1;

	std::cout << *p1 << std::endl;

	return 0;
}