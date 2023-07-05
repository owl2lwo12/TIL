#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string sentence;
	int count = 0;

	getline(cin, sentence, '\n');
	stringstream splitSentence(sentence);
	string i;
	while (splitSentence >> i) {
		count++;
	}
	cout << count;
}
