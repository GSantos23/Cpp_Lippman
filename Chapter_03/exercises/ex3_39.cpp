/*==============================================================================
Exercise 3.39: Write a program to compare two strings. Now write a program to 
compare the values of two C-style character strings.
==============================================================================*/
#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::endl;
using std::string;

/*
int main()
{
	string str1 = "cat";
	string str2 = "dog";

	if (str1 == str2)
		cout << "Both strings are equal\n";
	else
		cout << "Strings are different\n";

	return 0;
}
*/

int main()
{
	const char str1[] = "cat";
	const char str2[] = "dog";

	if (strcmp(str1, str2) == 0)
		cout << "Both strings are equal\n";
	else
		cout << "Strings are different\n";

	return 0;
}

