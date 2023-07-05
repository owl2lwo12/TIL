#include <iostream>
#include <string>

using namespace std;

int main() {
	string repeat;
	string word;
	int count;

	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> repeat >> word;
		int num = stoi(repeat);

		for (int j = 0; j < word.length() ; j++) {
			for (int k=0;k<num;k++)
				cout << word[j];
		}
		cout << endl;
	}
}
