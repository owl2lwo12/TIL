#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	vector<int> result;
	cin >> num;
	int t;
	for (int i = 0; i < num; i++) {
		cin >> t;
		if (t == 0) {
			if (!result.empty()) result.erase(result.end() - 1);
		}
		else {
			result.push_back(t);
		}
	}
	int fin = 0;
	for (int i = 0; i < result.size(); i++) {
		fin += result[i];
	}
	cout << fin;
}