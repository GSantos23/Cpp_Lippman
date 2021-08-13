/** 
 * Exercise 3.9: What does the following program do? Is it valid? If not, why
 * not?
 * 
 * 
	string s;
	cout << s[0] << endl;

 **/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(void)
{
	string s;
	cout << s[0] << endl; // prints an empty char or string in this case

	return 0;
}