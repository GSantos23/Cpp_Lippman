/*******************************************************************************
 * Exercise 3.36: Write a program to compare two arrays for equality. Write a
 * similar program to compare two vectors.
*******************************************************************************/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
/*
int main()
{
	constexpr size_t sz = 5;
	int arrA[sz] = {1, 2, 3, 4, 5};
	int arrB[sz] = {2, 4, 6, 8, 10};
	int *pA = arrA;
	int *pB = arrB;

	for (size_t i = 0; i < sz; ++i)
	{
		if (*pB > *pA)
			cout << *pB << " is greater than " << *pA << endl;

		pB++;
		pA++;
	}
}
*/
// vector version
int main()
{
	vector<int> vectorA = {1, 2, 3, 4, 5};
	vector<int> vectorB = {2, 4, 6, 8, 10};

	if (vectorA == vectorB)
		cout << "Both vectors are equal" << endl;
	else
		cout << "vectors are different" << endl;

	cout << endl;
	return 0;
}