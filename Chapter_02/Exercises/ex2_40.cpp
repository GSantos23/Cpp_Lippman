// Exercise 2.40: Write your own version of the Sales_data class.

struct Sales_data
{
	std::string bookName;
	std::string ISBN;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double discount = 0.0;	
};

Sales_data sales, transaction, *salesptr;