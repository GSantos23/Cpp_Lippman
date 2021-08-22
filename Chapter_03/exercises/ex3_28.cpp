/*=============================================================================
 * Exercise 3.28: What are the values in the following arrays?
 *===========================================================================*/
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;

string sa[10];
int ia[10];

int main()
{
    string sa2[10];
    int ia2[10];

    for (int i = 0; i < 10; ++i) {
        cout << " " << sa2[i];
    }

    cout << endl;

    return 0;
}


// for ia[10] all elements are zero
// for ia2[10] we have dummy values
// for sa[10] we have empty strings
// for sa2[10] we have empty strings as well
