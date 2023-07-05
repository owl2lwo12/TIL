#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num1, num2, num3;
	num1 = 1;
	while (true) {
		cin >> num1 >> num2 >> num3;
		if (num1 == 0 && num2 == 0 && num3 == 0)
			break;
		num1 = num1 * num1;
		num2 = num2 * num2;
		num3 = num3 * num3;

		if (num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2) {
			cout << "right" << endl;
		}
		else
			cout << "wrong" << endl;
			
	}
}
