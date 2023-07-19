#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<pair<int, int>> pos;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int x, y;
		cin >> x >> y;
		pair<int, int> t;
		t.first = y;
		t.second = x;
		pos.push_back(t);
	}

	stable_sort(pos.begin(), pos.end());

	for (int i = 0; i < pos.size(); i++) {
		cout << pos[i].second << " " << pos[i].first << "\n";
	}

}
