#include <iostream>

using namespace std;

int main() {
	int serialNo = 0;
	int usedNo[5];

	cin >> usedNo[0] >> usedNo[1] >> usedNo[2] >> usedNo[3] >> usedNo[4];

	for (int i = 0; i < 5; i++) {
		serialNo += usedNo[i] * usedNo[i];
	}
	serialNo %= 10;

	cout << serialNo;
}
