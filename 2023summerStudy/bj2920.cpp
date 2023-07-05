#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string ascendingword = "1 2 3 4 5 6 7 8";
	string descendingword = "8 7 6 5 4 3 2 1";
	string word;

	getline(cin, word, '\n');

	if (word == ascendingword)
		cout << "ascending";
	else if (word == descendingword)
		cout << "descending";
	else
		cout << "mixed";
}
