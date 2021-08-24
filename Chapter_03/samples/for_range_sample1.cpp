#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(void)
{
	string str("some string");
	// prints the characters in str one character to a line
	for (auto c : str)		// for every char in str
		cout << c << endl;  // pritn the current char followed by newline

	string separator(50, '=');
	cout << separator << endl;

	string s("Hello World!!!");
	// punct has the same type that s.size returns;
	decltype(s.size()) punct_cnt = 0;
	//count the number of punctuation character in s
	for (auto c: s)			// for every char in s
		if (ispunct(c))		// if the character is punctuation
			++punct_cnt;	// increment the punctuation counter

	cout << punct_cnt << " punctuation characters in " << s << endl;

	return 0;
}