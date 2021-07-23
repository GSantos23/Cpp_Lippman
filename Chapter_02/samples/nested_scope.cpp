#include <iostream>
// Program for illustration purposes only: It is bad style for a funcion
// to use a global variable and also define a local variable with the same name
int reused = 42;
int main()
{
	int unique = 0; // unique has block scope
	// output #1 uses global reused; print 42 0
	std::cout << reused << " " << unique << std::endl;
	int reused = 0; // new, local object named reused hides global reused
	// output #2 uses local reused; print 0 0 
	std::cout << reused << " " << unique << std::endl;
	// output #3 xplicitly requests the global reuses; print 42 0
	std::cout << ::reused << " " << unique << std::endl;

	return 0;
}