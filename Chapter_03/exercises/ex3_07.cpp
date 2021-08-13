/**
 * What would happen if you define the loop control variable in
 * the previous exercise as type char? Predict the results and then change your
 * program to use a char to see if you were right.
 */

/**
 * Prediction: compiler warning, however we can try using unsigned to view the
 * different actions
 * 
 * Using unsinged char there is no issue, because decltype is type unsigned, but
 * removing unsigned we obtain the following warning:
 * warning: comparison of integer expressions of different signedness: 
 * ‘char’ and ‘std::__cxx11::basic_string<char>::size_type’ 
 * {aka ‘long unsigned int’} [-Wsign-compare]
   29 |  for (char index = 0; index != str1.size(); index++)
 * 
 * 
 **/ 



#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	string str1 = "some string";
	string str2;
	cout << " The string after the change is: " << endl;

	for (char index = 0; index != str1.size(); index++)
	{
		str1[index] = 'x';
	}

	cout << str1 << endl;
}