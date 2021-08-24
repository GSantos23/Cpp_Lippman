// using getline to read an entirre line
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string line;
	// read input a line at a time until eof
	while (getline(cin, line))
		cout << line << endl;

	return 0;
}
