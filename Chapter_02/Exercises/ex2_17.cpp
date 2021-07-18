// Exercise 2.17: What does the following code print?
#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
}

// answer: 10 10, because when we assign 10 to ri, we already change the value of i
