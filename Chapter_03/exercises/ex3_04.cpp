/**
 * Exercise 3.4: Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change
 * the program to report whether the strings have the same length, and if
 * not, report which is longer.
 *
 */

#include <iostream>  
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	string s1;
	string s2;
	string separator(30, '=');

	unsigned int s1_size;
	unsigned int s2_size;

	cout << "Enter two strings:" << endl;
	cin >> s1 >> s2;

	// To report if strings are equal
	if (s1 == s2)
		cout << "Both strings are equal" << endl;
	else
		cout << "Different strings" << endl;


	cout << separator << endl;
	// To report size of strings
	s1_size = s1.size();
	s2_size = s2.size();

	if (s1_size == s2_size)
		cout << "Both strings have a length of " << s1_size << endl;
	else if (s1_size > s2_size)
		cout << "string s1 is longer" << endl;
	else if (s1_size < s2_size)
		cout << "string s2 is longer" << endl;


	return 0;
}