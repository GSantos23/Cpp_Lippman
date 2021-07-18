/** Exercise 2.18: Write code to change the value of a pointer. Write code to
change the value to which the pointer points. */

#include <iostream>

int main()
{
	int *test_pointer = nullptr;	// this point has value 0
	int value = 50;

	std::cout << "value before = " << value << std::endl;
	
	test_pointer = &value;
	*test_pointer = 10;

	std::cout << "value after = " << value << std::endl;
	std::cout << "test_pointer = " << test_pointer << std::endl;
	std::cout << "*test_pointer = " << *test_pointer << std::endl;

	return 0;
}