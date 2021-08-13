/** 
 * Exercise 3.8: Rewrite the program in the first exercise, first using a while
 * and again using a traditional for loop. Which of the three approaches do
 * you prefer and why?
 **/ 

// The three forms are almost equal, however using decltype is kinda new to me,
// so I dont mind to give this form a chance

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
int main(void)
{
	string str1 = "some string";
	string str2;
	cout << " The string after the change is: " << endl;

	for (unsigned char index = 0; index != str1.size(); index++)
	{
		str1[index] = 'x';
	}

	cout << str1 << endl;

	return 0;
}*/


// uncoment to test the while version, do not forget to comment the previous one


int main(void)
{
	string str1 = "some string";
	string str2;
	cout << " The string after the change is: " << endl;

	unsigned char index = 0;

	while (index != str1.size()) {
		str1[index] = 'x';
		index++;
	}

	cout << str1 << endl;

	return 0;
}
