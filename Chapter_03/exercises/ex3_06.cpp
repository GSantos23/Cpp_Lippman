/**
 * Exercise 3.6: Use a range for to change all the characters in a string to X.
 **/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	string str1("some string");

	cout << " The string after the change is: " << endl;

	for (auto &c : str1)
		c = 'x';

	cout << str1 << endl;
}