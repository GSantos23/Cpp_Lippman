/*==============================================================================
Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
using iterators instead of subscripts
==============================================================================*/
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	// 11 buckets, all initially 0
	vector<unsigned> scores (11, 0);	
	unsigned grade;
	auto iterator = scores.begin();
	while (cin >> grade) {		// read the grades
		if (grade <= 100)		// handle only valid grades
			//++scores[grade/10];	// increment counter for current cluster
			++*(iterator + grade/10);
	}


	// for each loop, for every item in scores
	for(auto &item: scores)
		cout << " " << item;

	cout << endl;

	return 0;
}