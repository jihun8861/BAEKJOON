#include<iostream>
using namespace std;
int main() {
	int A, B, C, gop;
	int cnt[10] = { 0 };
	cin >> A;
	cin >> B;
	cin >> C;
	gop = A * B * C;
	for (int i = gop; i > 0; i /=10) { //�̺κ��� ���� �� �߽��ϴ�..
		int num = i % 10;
		cnt[num]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << endl;
	}
}