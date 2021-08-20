/* ============================================================================
Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.
==============================================================================*/
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::vector;
using std::endl;
using std::string;

int main()
{
	vector<int> ivector;
	int value;

	cout << "Enter a non integer value to finish the capture" << endl;
	while (cin >> value)
		ivector.push_back(value);

	cout << "The vector is filled with the following numbers" << endl;;
	//for (unsigned int j = 0; j < ivector.size(); j++)
	//	cout << "vector2 :" << ivector[j] << endl;
	for (auto it = ivector.begin(); it != ivector.end(); ++it)
		cout << "ivector: " << *it << endl;

	cout << endl;

	return 0;
}