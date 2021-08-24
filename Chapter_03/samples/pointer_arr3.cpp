// another sample using pointer arithmetic in c++
#include <iostream>
using namespace std;

int main()
{
	constexpr size_t sz = 5;
	int arr[sz] = {1,2,3,4,5};
	int *ip = arr;			// equivalent to int *ip = &arr[0]
	int *ip2 = ip + 4;		// ip2 points to arr[4], the last element in arr

	cout << "*ip = " << *ip <<  endl;
	cout << "*ip2 = " << *ip2 << endl;

	return 0;
}