#include<iostream>
using namespace std;
int main() {
	int num[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = 0;
	int gps = 0;

	for (int i = 0; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			gps = 1+i;
		}
			
	}
	cout << max << endl;
	cout << gps << endl;
}