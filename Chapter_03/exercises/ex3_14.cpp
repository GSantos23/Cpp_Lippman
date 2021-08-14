/**
 * Exercise 3.14: Write a program to read a sequence of ints from cin and
 * store those values in a vector.
 **/ 
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	vector<int> ivector;
	int numbers;

	while(cin >> numbers)
		ivector.push_back(numbers);

	return 0;
}