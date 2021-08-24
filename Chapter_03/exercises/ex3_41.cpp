// Exercise 3.41: Write a program to initialize a vector from an array of ints.
#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::vector;
using std::endl;

int main()
{
	int iarr[] = {0, 1, 2, 3, 4, 5};

	// you have to use std::begin() and std::end() to avoid conflict with same
	// methods but for vectors
	vector<int> ivec(std::begin(iarr), std::end(iarr));

	for (auto &it : ivec)
		cout << it << " ";

	cout << endl;

	return 0;
}