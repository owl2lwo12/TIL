#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	if (N == 1) cout << "1";
	else {
		N -= 1;
		int i = 1;
		while (N > i) {
			N -= i;
			i *= 2;
		}
		N = 2 * N;
		cout << N;
	}
}