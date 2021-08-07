/**
 * Exercise 3.2: Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 **/
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout; 
using std::endl;

int main()
{
	string line;
	string word;

	/* This part read a word using endl to jump to another word */
	//while (getline(cin, line))
	//	cout << line << endl;

	/* This part only need a space to jump to another word*/
	while (cin >> word)
		cout << word << endl;

	return 0;
}
