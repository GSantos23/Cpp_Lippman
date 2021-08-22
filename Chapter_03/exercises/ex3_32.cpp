/**=============================================================================
 * Exercise 3.32: Copy the array you defined in the previous exercise into
 * another array. Rewrite your program to use vectors.
 ******************************************************************************/

#include <iostream>
#include <cstddef>
#include <vector>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::vector;

/*
int main()
{
	size_t arrInt[10];
	size_t copyar[10] = {0};

	for (size_t it = 0; it < 10; ++it)
		arrInt[it] = it;

	cout << "The contents of arrInt are: " << endl;

	for (size_t j = 0; j < 10; ++j)
		cout << arrInt[j] << " ";

	cout << "\nThe contents of copyar are: " << endl;
	for (size_t j = 0; j < 10; ++j)
		cout << copyar[j] << " ";

	// to copy the array we need to tranverse both arrays
	for (size_t t = 0; t < 10; ++t) {
		copyar[t] = arrInt[t];
	}

	cout << "\nThe new contents of copyar are: " << endl;
	for (size_t j = 0; j < 10; ++j)
		cout << copyar[j] << " ";

	cout << endl;
	return 0;
}*/

// now using vectors
int main()
{
	vector<int> v1;
	vector<int> v2;

	for (unsigned int i = 0; i < 10; ++i)
		v1.push_back(i);


	for (unsigned int i = 0; i < v1.size(); ++i)
	{
		cout << "v1 value " << i << ": " << v1[i] << endl;
	}


	cout << "===============================================================\n";
	// using assigment operator you save the use of another for loop to copy
	v2 = v1;

	for (unsigned int i = 0; i < v2.size(); ++i)
	{
		cout << "v2 value " << i << ": " << v2[i] << endl;
	}



	cout << endl;

	return 0;
}