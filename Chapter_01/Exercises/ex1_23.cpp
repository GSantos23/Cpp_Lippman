/*
Exercise 1.23: Write a program that reads several transactions and counts
how many transactions occur for each ISBN .
Exercise 1.24: Test the previous program by giving multiple transactions
representing multiple ISBN s. The records for each ISBN should be grouped
together.
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, item;
	std::cout << "Enter data: " << std::endl;

	if(std::cin >> currItem) 
	{
		int cnt = 1;
		while (std::cin >> item)
		{
			if (item.isbn() == currItem.isbn())
				cnt++;
			else 
			{
				std::cout << "# of transactions: " << cnt << " for " 
				<< currItem.isbn() << std::endl;

				currItem = item;
				cnt = 1;
			}
		}

		std::cout << "# of transactions: " << cnt << " for " << currItem.isbn() 
		<< std::endl;
	}

	return 0;
}
