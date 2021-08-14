/**
 * Exercise 3.18: Is the following program legal? If not, how might you fix it?
 * 
	vector<int> ivec;
	ivec[0] = 42;
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
	vector<int> ivec;
	ivec.push_back(42);

	cout << ivec[0] << endl;

	return 0;
}