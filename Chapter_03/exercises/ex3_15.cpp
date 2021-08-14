/**
 * Exercise 3.15: Repeat the previous program but read strings this time.
 **/


#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(void)
{
	vector<string> svector;
	string phrases;

	while(cin >> phrases)
		svector.push_back(phrases);

	return 0;
}