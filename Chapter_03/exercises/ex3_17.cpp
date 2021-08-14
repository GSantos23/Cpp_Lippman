/**
 * Exercise 3.17: Read a sequence of words from cin and store the values a
 * vector. After you’ve read all the words, process the vector and change
 * each word to uppercase. Print the transformed elements, eight words to a
 * line
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
	vector<string> words;
	string letters;
	int jump = 0;

	while (cin >> letters)
		words.push_back(letters);

	for (unsigned int i = 0; i < words.size(); i++)
	{

		if (jump > 7) {
			cout << '\n';
			jump = 0;
			//cout << " " << '\b';
		}

		cout << words[i] << " ";
		jump++;
	}

	cout << endl;
	return 0;

}