// Exercise 3.42: Write a program to copy a vector of ints into an array of ints.
#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::vector;
using std::endl;

int main()
{
	vector<int> ivec = {0, 1, 2, 3, 4, 5};
	size_t sz = ivec.size();
	int iarr[sz];

	for (size_t i = 0; i < sz; ++i) {
		iarr[i] = ivec[i];
		cout << iarr[i] << " ";
	}

	cout << endl;

	return 0;
}