/* ============================================================================
Exercise 3.22: Revise the loop that printed the first paragraph in text to
instead change the elements in text that correspond to the first paragraph
to all uppercase. After you’ve updated text, print its contents.
==============================================================================*/
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::endl;
using std::string;

int main()
{
	vector<string> text;
	string line;

	while(getline(cin, line))
		text.push_back(line);

	for (auto it = text.begin(); it != text.end(); ++it) {
		for (auto &c: *it)
			c = toupper(c);
		cout << *it << endl;
	}

	return 0;
}