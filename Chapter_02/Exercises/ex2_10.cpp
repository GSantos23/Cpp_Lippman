//Exercise 2.10: What are the initial values, if any, of each of the following
//variables?

/** Answers:
 * When you test global int is going to be 0, however local_int is going to contain
 * an random value everytime you run it.
 * Regarding local_str and global_str, both are going to contain the empty string
 *
 */

#include <iostream>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << "global_str = " << global_str << std::endl;
    std::cout << "global_int = " << global_int << std::endl;
    std::cout << "local_int  = " << local_int << std::endl;
    std::cout << "local_str  = " << local_str << std::endl;

    return 0;
}


