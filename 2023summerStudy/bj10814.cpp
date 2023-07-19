#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<string> member[201];
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int age;
		string name;
		cin >> age;
		cin.ignore();
		getline(cin, name);
		member[age].push_back(name);
	}

	for (int i = 1; i < 201; i++) {
		for (int j = 0; j < member[i].size(); j++) {
			cout << i << " " << member[i][j] << "\n";
		}
	}

}
