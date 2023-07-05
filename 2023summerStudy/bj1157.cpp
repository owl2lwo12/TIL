#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string word;

	char manyuse = '!';
	int largestcount = 0;

	cin >> word;

	for (int i = 0; i < word.length() ; i++) {
		if (word[i] > 'Z') {
			word[i] -= 32;
		}
	}
	while (word.length() > 0) {
		char t = word[0];
		int count = 0;
		for (int i = 0; i < word.length(); i++) {
			if (t == word[i]) 
				count++;
		}
		word.erase(remove(word.begin(), word.end(), t),word.end());
		
		if (count > largestcount) {
			manyuse = t;
			largestcount = count;
		}
		else if (count == largestcount) {
			manyuse = '?';
		}
	}
	cout << manyuse;
}
