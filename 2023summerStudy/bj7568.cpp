#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Size {
	int weight;
	int height;
	
	Size() {
		weight = 0;
		height = 0;
	}

	Size(int w, int h) {
		weight = w;
		height = h;
	}
};

int main() {
	vector<Size> manSize;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int w, h;
		cin >> w >> h;
		Size smp = Size(w, h);
		manSize.push_back(smp);
	}
	for (int i = 0; i < num; i++) {
		int t = 1;
		for (int j = 0; j < num; j++) {
			if (i != j && manSize[i].weight < manSize[j].weight && manSize[i].height<manSize[j].height) {
				t++;
			}
		}
		cout << t << " ";
	}

}
