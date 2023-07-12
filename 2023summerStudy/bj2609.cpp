#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1, num2;
	int tnum1, tnum2;
	int glb, lub;
	cin >> num1 >> num2;
	tnum1 = num1;
	tnum2 = num2;
	
	while (true) {
		if (num2 > num1) swap(num1, num2);

		if (num1 % num2 != 0) {
			int t = num1 % num2;
			num1 = num2;
			num2 = t;
		}
		else {
			glb = num2;
			break;
		}
	}
	lub = tnum1 * (tnum2 / glb);

	cout << glb << endl << lub;

}