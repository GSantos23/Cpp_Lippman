/*
	Exercise 1.15: Write programs that contain the common errors discussed in
	the box on page 16. Familiarize yourself with the messages the compiler
	generates.
*/


#include <iostream>

int main()
{
	int sum = 0 , number = 50:		// Colon instead of semicolon

	while(number <= 100)
	{
		SUM += number;	// Different variable than sum
		number++;
	}

	cout << "The result is " << sum << std::endl; // forget to call stream

	return 0		// Missing ;  
}

/* Errors from compiler

ex1_15.cpp:25:1: error: unterminated comment
   25 | /* Errors from compiler
      | ^
ex1_15.cpp: In function ‘int main()’:
ex1_15.cpp:12:27: error: expected ‘,’ or ‘;’ before ‘:’ token
   12 |  int sum = 0 , number = 50:  // Colon instead of semicolon
      |                           ^
ex1_15.cpp:20:2: error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
   20 |  cout << "The result is " << sum << std::endl; // forget to call stream
      |  ^~~~
      |  std::cout
In file included from ex1_15.cpp:8:
/usr/lib/gcc/x86_64-pc-linux-gnu/9.3.0/include/g++-v9/iostream:61:18: note: ‘std::cout’ declared here
   61 |   extern ostream cout;  /// Linked to standard output
      |                  ^~~~
ex1_15.cpp:22:10: error: expected ‘;’ before ‘}’ token
   22 |  return 0  // Missing ;
      |          ^
      |          ;
   23 | }
      | ~  
*/
