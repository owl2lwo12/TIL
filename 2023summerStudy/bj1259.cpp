#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool isPel = false;
	while (true) {
		string num;
		getline(cin, num);
		isPel = true;

		if (num[0] == '0') {
			break;
		}
		else {
			for (int i = 0; i < num.length() / 2; i++) {
				if (num[i] != num[num.length()-1-i]) {
					isPel = false;
					break;
				}
			}
		}
		if (isPel == true) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}