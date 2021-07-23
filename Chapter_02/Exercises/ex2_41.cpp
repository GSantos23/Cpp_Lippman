/**
 * Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
 * 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define
 * your Sales_data class in the same file as your main function.
 **/

#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookName;
	std::string isbn;
	unsigned units_sold = 0;
	double revenue = 0.0;	
};

/** p 22
int main()
{
	Sales_data book;
	double price;
	// read ISBN, number of copies, and sale prices
	std::cin >> book.bookName >> book.units_sold >> price;
	// write ISBN, number of copies sold, total revenue, and average price
	std::cout << book.bookName << " " << book.units_sold  << " " << price 
	<< std::endl;

	return 0;
}
**/

/* p 24 is the same program as in library.cpp */

int main()
{
	Sales_data total;
	if (std::cin >> total.revenue) {
		Sales_data trans;
		while (std::cin >> trans.revenue) {
				if ( total.isbn == trans.isbn)
				total.revenue += trans.revenue;
			else {
				std::cout << total.revenue << std::endl;
				total.revenue = trans.revenue;
			}
		}
		std::cout << total.revenue << std::endl;
	} else {
		std::cerr << "No data?!!" << std::endl;
		return -1;
	}
	return 0;
}