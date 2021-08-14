/**
 * Exercise 3.20: Read a set of integers into a vector. Print the sum of each
 * pair of adjacent elements. Change your program so that it prints the sum of
 * the first and last elements, followed by the sum of the second and second-to-
 * last, and so on.
 **/ 
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(void)
{
 	vector<int> ivec;
    int i;
    while (cin >> i) ivec.push_back(i);

    if (ivec.empty()) {
        cout << "input at least one integer." << endl;
        return -1;
    }
    else if (ivec.size() == 1) {
        cout << ivec[0] << " don't have any adjacent elements.";
    }
    else {
        for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; ++i)
            cout << ivec[i] + ivec[i + 1] << " ";
    }

    cout << endl;

    decltype(ivec.size()) size = ivec.size();
    if (size % 2 != 0)
        size = size / 2 + 1;
    else
        size /= 2;

    for (decltype(ivec.size()) i = 0; i != size; ++i)
        cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
    cout << endl;

}