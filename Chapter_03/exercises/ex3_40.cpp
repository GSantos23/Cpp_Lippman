/*==============================================================================
Exercise 3.40: Write a program to define two character arrays initialized
from string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy the two
arrays into the third.
==============================================================================*/
#include <iostream>
#include <cstring>


using std::cout;
using std::endl;
using std::string;

int main()
{
	const char str1[] = "cat";
	const char str2[] = "dog";
	char str3[40];

	strcpy(str3, str1);
	strcat(str3, " ");
	strcat(str3, str2);

	cout << str3 << endl;

	return 0;
}