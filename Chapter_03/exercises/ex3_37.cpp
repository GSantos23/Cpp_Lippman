/*******************************************************************************
 * Exercise 3.37: What does the following program do?
*******************************************************************************/
/* ans: print every character in a new line */
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;

	while (*cp) {
		cout << *cp << endl;
		++cp;
	}

	return 0;
}