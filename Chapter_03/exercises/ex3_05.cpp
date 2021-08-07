/**
 * Exercise 3.5: Write a program to read strings from the standard input,
 * concatenating what is read into one large string. Print the concatenated
 * string. Next, change the program to separate adjacent input strings by a
 * space.
 **/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string stringA, stringB;
	string concatAB;


	cout << "Please enter string A: " << endl;
	getline(cin, stringA);
	cout << "Please enter string B: " << endl; 
	getline(cin, stringB);

	concatAB = stringA + stringB;

	cout << "Concatenated string is: " << concatAB << endl;

	// to avoid a simple add space between stringA and strinB, I will use the
	// string.size() of first string to seperate concatenated string
	string divorce;
	unsigned int sa_size = 0;
	unsigned int sb_size = 0;

	sa_size = stringA.size();
	sb_size = stringB.size();
	// https://www.cplusplus.com/reference/string/string/insert/
	// string& insert (size_t pos, const string& str);
	divorce = concatAB.insert(sa_size, " ");
	cout << "Final string: " << divorce << endl;

	return 0;
}