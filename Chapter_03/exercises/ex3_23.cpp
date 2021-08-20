/* ============================================================================
Exercise 3.23: Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
==============================================================================*/
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::endl;
using std::string;

int main()
{
	vector<int> v1(10); // v1 has 10 elements with value 0
	int value = 1;

	for (auto it = v1.begin(); it != v1.end(); ++it) {
		*it = value * 2;
		value++;
	}

	cout << "The contents of v1 vector are: " << endl;
	for (auto j = v1.begin(); j != v1.end(); ++j)
		cout << *j << endl;

	cout << endl;

	return 0;
}