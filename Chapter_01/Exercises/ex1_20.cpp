/*
	Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of
	Sales_item.h in the Chapter 1 code directory. Copy that file to your
	working directory. Use it to write a program that reads a set of book sales
	transactions, writing each transaction to the standard output.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Please type a set of book sales" << std::endl;
	Sales_item item1, item2, item3;


	std::cin >> item1 >> item2 >> item3;		// read pair of transactions
	std::cout << "Result from purchase ==========================" << std::endl;
	std::cout << item1 + item2 + item3 << std::endl;	// print their sum
	std::cout << "Items on this list   ==========================" << std::endl;
	std::cout << item1 << std::endl;
	std::cout << item2 << std::endl;
	std::cout << item3 << std::endl;


	return 0;
}