// reading a unknow number of strings
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string word;					
	// read until end-of-file
	while (cin >> word)
		cout << word << endl;	// write each word followed by a new line

	return 0;
}