/**
 * Exercise 3.16: Write a program to print the size and contents of the
 * vectors from exercise 3.13. Check whether your answers to that exercise
 * were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
 * were wrong.
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
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1 size = "<< v1.size() << endl;
	cout << "v2 size = "<< v2.size() << endl;
	cout << "v3 size = "<< v3.size() << endl;
	cout << "v4 size = "<< v4.size() << endl;
	cout << "v5 size = "<< v5.size() << endl;
	cout << "v6 size = "<< v6.size() << endl;
	cout << "v7 size = "<< v7.size() << endl;


	return 0;
}