/**
 * Exercise 3.10: Write a program that reads a string of characters including
 * punctuation and writes what was read but with the punctuation removed.
 **/ 
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	cout << "Enter a string: " << endl;

	string result;			// will hold the resulting
	cin >> result;

	for (auto& c : result)
		if (ispunct(c))
			c = ' ';
		
	cout << result << endl;

	return 0;
}