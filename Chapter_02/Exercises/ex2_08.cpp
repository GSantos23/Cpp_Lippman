/**
 * Exercise 2.8: Using escape sequences, write a program to print 2M followed
 * by a newline. Modify the program to print 2, then a tab, then an M, followed
 * by a newline.
 *
 */
#include <iostream>

int main()
{
    std::cout << "1st print -> 2\x4d " << std::endl;
    std::cout << "2nd print -> 2\t\115\n" << std::endl;

    return 0;
}
