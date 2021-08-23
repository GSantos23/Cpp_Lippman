/*******************************************************************************
 * Exercise 3.35: Using pointers, write a program to set the elements in an
 * array to zero.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	constexpr size_t sz = 5;
	int arr[sz] = {1,2,3,4,5};
	int *p = arr;

	cout << "The values of the new array are: ";
	for (size_t i = 0; i < sz; ++i) {
		*p = 0;
		cout << *p << " ";
		p++;
	}

	cout << endl;

	return 0;
}