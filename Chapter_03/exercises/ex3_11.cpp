/**
 * Exercise 3.11: Is the following range for legal? If so, what is the type of
 * c?
 *
 **/

#include <iostream>
#include <string>
#include <typeinfo> // to print a type of a variable

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	const string s = "Keep out!";
	for (auto &c : s) 
	{
		cout << typeid(c).name() << endl;
	};

	//char type

	return 0;
}