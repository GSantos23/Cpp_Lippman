/**
 * Exercise 2.34: Write a program containing the variables and assignments
 * from the previous exercise. Print the variables before and after the
 * assignments to check whether your predictions in the previous exercise were
 * correct. If not, study the examples until you can convince yourself you know
 * what led you to the wrong conclusion
 **/

#include <iostream>

int main(void)
{
	int i = 0, &r = i;
	auto a = r; // a is an int (r is an alias for i, which is type int)

	const int ci = i, &cr = ci;
	auto b = ci; // b is an int (top-level const in ci is dropped)
	auto c = cr; // c is an int (cr is an alias for ci whose const is top level)
	auto d = &i; // d is an int* (& of a const an int object is int*)
	auto e = &ci; // e is const int*(& of a const objext is low level const)

	const auto f = ci; // deduced type of ci is int; f has type const int
	auto &g = ci;      // g is a const int& that is bound to ci

	std::cout << "Before =================================" << std::endl;
	std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
	std::cout << "d = " << d << " e = " << e << " g = " << g << std::endl;

	a = 42; 
	b = 42;
	c = 42;
	*d = 42;
	//e = 42;
	//g = 42;

	std::cout << "After =================================" << std::endl;
	std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
	std::cout << "d = " << d << " e = " << e << " g = " << g << std::endl;

	return 0;

}