/*
Exercise 1.22: Write a program that reads several transactions for the same
ISBN . Write the sum of all the transactions that were read.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, finalItem;
	short number_of_items;

	std::cout << "Type number of items with same ISBN:" << std::endl;
	std::cin >> number_of_items;
	std::cout << "Type ISBN item:"  << std::endl;
	std::cin >> item1;

	std::cout << "Calculating ========================" << std::endl;
	for (int i = 0; i < number_of_items; i++)
	{
		item1 +=  item1;
	}

	//finalItem = item1;

	std::cout << "Result:" << item1 <<std::endl;



	return 0;
}