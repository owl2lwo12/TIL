#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string vps;
	int num;
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; i++) {
		getline(cin, vps);
		int count = 0;
		if (vps.front() != '(') {
			cout << "NO\n";
			continue;
		}
		if (vps.back() != ')') {
			cout << "NO\n";
			continue;
		}
		if (vps.length() % 2 == 1) {
			cout << "NO\n";
			continue;
		}
		for (int j = 0; j < vps.size();j++) {
			if (vps[j] == '(') count++;
			else if (vps[j] == ')') count--;

			if (count < 0) break;
		}
		if (count == 0)cout << "YES\n";
		else cout << "NO\n";
	}
}