// VectorString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"
/*#include <iostream>
#include <cstdlib>
#include <string>*/

//using namespace std;

int main()
{
	vector<string>words;
	for (string temp; cin >> temp;) // read white space separated words
		words.push_back(temp); // puts word into vector
	cout << "Number of words: " << words.size() << '\n';

	sort(words); // sort the words

	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i]) // is this a new word?
			cout << words[i] << "\n";

	system("pause"); // press CTRL Z then enter to stop

   return 0;
}

