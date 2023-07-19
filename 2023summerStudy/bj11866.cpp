#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	queue<int> yos;
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		yos.push(i);
	}
	int k = 0;
	cout << "<";
	while (yos.size()!=0) {
		k++;
		int t = yos.front();
		if (k < K) {
			yos.pop();
			yos.push(t);
		}
		else if (k == K) {
			yos.pop();
			cout << t;
			if (yos.size() == 0) {
				cout << ">";
			}
			else {
				cout << ", ";
			}
			k = 0;
		}
	}
}
