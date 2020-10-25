/*
Exercise 1.21: Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Please type a set of book sales with same ISBN" << std::endl;
	Sales_item item1, item2;


	std::cin >> item1 >> item2;		// read pair of transactions
	std::cout << "Result from purchase ==========================" << std::endl;
	std::cout << item1 + item2 << std::endl;	// print their sum

	return 0;
}