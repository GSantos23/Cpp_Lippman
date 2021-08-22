/** ============================================================================
 * Exercise 3.30: Identify the indexing errors in the following code:
==============================================================================*/
#include <iostream>
#include <cstddef>

using std::cout;
using std::string;
using std::cin;
using std::endl;

int main()
{
	size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix <= array_size; ++ix)
		ia[ix] = ix;

	for(size_t ix = 1; ix <= array_size; ++ix)
		cout << " " << ia[ix];

	cout << endl;
	return 0;
}

// ans: we have a missing element of the array ia[0]
// if you are using size_t remove constexpr
// compiler error:
//*** stack smashing detected ***: terminated
//Aborted
