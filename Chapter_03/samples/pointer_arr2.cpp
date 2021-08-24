// program using iterator header for begin,end
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int *beg = begin(arr); 	// pointer to the first element in arr
	int *last = end(arr);	// pointer past the last elements in arr

	while (beg != last) {
		cout << *beg << " ";
		++beg;
	}

	cout << endl;

	return 0;
}