/*

Exercise 1.6: Explain whether the following program fragment is legal.

std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

If the program is legal, what does it do? If the program is not legal, why
not? How would you fix it?
*/

#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1;
	          << " and " << v2;
	          << " is " << v1 + v2 << std::endl;

	return 0;
}

/**
 * Answer: Is not legal, when you try to compile this code errors appear:
 * 
 
		ex1_06.cpp: In function ‘int main()’:
		ex1_06.cpp:21:12: error: expected primary-expression before ‘<<’ token
		   21 |            << " and " << v2;
		      |            ^~
		ex1_06.cpp:22:12: error: expected primary-expression before ‘<<’ token
		   22 |            << " is " << v1 + v2 << std::endl;
		      |            ^~

 *
 *
 * To the program to compil correctly we need to add std::cout to every line,
 * due that ; end the statement.
 *
 * 	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1; 
	std::cout << " and " << v2;
	std::cout << " is " << v1 * v2 << std::endl;
 */