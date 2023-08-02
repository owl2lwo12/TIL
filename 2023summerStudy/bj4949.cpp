#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;

	vector<int> balancedworld;

	while (true) {
		getline(cin, str);
		if (str == ".")break;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '[') {
				balancedworld.push_back(1);
			}
			else if (str[i] == '(') {
				balancedworld.push_back(0);
			}
			else if (str[i] == ']') {
				if (balancedworld.empty() || balancedworld.back() != 1) {
					cout << "no\n";
					balancedworld.clear();
					break;
				}
				else {
					balancedworld.erase(balancedworld.end() - 1);
				}
			}
			else if (str[i] == ')') {
				if (balancedworld.empty() || balancedworld.back() != 0) {
					cout << "no\n";
					balancedworld.clear();
					break;
				}
				else {
					balancedworld.erase(balancedworld.end() - 1);
				}
			}

			if (i == str.length() - 1) {
				if (balancedworld.empty()) {
					cout << "yes\n";
					balancedworld.clear();
					break;
				}
				else {
					cout << "no\n";
					balancedworld.clear();
					break;
				}
			}
		}
	}
}