// example of using pointers to display arrays
#include <iostream>

using namespace std;

int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int *e = &arr[10]; // pointer just past the last element in arr

	for (int *b  = arr; b != e; ++b)
		cout << *b << endl;	// print the elements in arr

	cout << endl;

	return 0;
}