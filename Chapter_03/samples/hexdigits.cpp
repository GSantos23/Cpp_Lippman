// This program will print the hex version of your input

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	const string hexdigits = "0123456789ABCDEF"; // possible hex digits
	cout << "Enter a series of numbers between 0 and 15"
		<< " separated by spaces. Hit ENTER when finished: " << endl;

	string result;			// will hold the resulting hexify'd string
	string::size_type n;	// hold number from the input
	//unsigned int n;
	while (cin >> n)
		if (n < hexdigits.size())		// ignore invalid input
			result += hexdigits[n];		// fetch the indicated hex digit

	cout << "Your hex number is: " << result << endl;

	return 0;
}