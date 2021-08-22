/**=============================================================================
 * Exercise 3.31: Write a program to define an array of ten ints. Give each
 * element the same value as its position in the array.
=============================================================================**/
#include <iostream>
#include <cstddef>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main()
{
	size_t arrInt[10];

	for (size_t it = 0; it < 10; ++it)
		arrInt[it] = it;

	cout << "The contents of arrInt are: " << endl;

	for (size_t j = 0; j < 10; ++j)
		cout << arrInt[j] << " ";

	cout << endl;
	return 0;
}