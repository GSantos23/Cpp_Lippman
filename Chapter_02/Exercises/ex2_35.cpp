/**
 * Exercise 2.35: Determine the types deduced in each of the following
 * definitions. Once you’ve figured out the types, write a program to see
 * whether you were correct.
 * 
 * const int i = 42;
 * auto j = i; const auto &k = i; auto *p = &i;
 * const auto j2 = i, &k2 = i;
 * 
 **/

/*
 j is typ int
 k is type const int
 p is pointer to const i
 j2 is const int
 k2 is int*
*/

#include <iostream>

int main()
{
	const int i = 42;
 	auto j = i; const auto &k = i; auto *p = &i;
 	const auto j2 = i, &k2 = i;

 	std::cout << "i = " << i << " j = " << j << " k = " << k << std::endl;
 	std::cout << "*p = " << *p << " j2 = " << j2 << " k2 = " << k2 << std::endl;

 	return 0;

}