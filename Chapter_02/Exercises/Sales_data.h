#ifndef SALES_DATA_H
#define SALES_DATA_H 
#include <string>
struct Sales_data
{
	std::string bookName;
	std::string isbn;
	unsigned units = 0;
	double discount = 0.0;
	double revenue = 0.0;	
};
#endif

