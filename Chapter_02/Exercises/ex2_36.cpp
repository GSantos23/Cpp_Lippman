/*
Exercise 2.36: In the following code, determine the type of each variable
and the value each variable has when the code finishes:

int a = 3, b = 4;		
decltype(a) c = a;		// type int
decltype((b)) d = a;	// type int
++c;
++d;

c = 4
b = 4
*/

#include <iostream>

int main(void)
{
	int a = 3, b = 4;		
	decltype(a) c = a;		// type int
	decltype((b)) d = a;	// type int
	++c;
	++d;

	std::cout << "Final value of c " << c << std::endl;
	std::cout << "Final value of d " << d << std::endl;

	return 0;
}