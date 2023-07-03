#include<iostream>
using namespace std;
int main() {
	int result=0;
	cin >> result;
	if (90 <= result && result <= 100)
		cout << "A"<<endl;
	else if (80 <= result && result <= 89)
		cout << "B"<< endl;
	else if (70 <= result && result <= 79)
		cout << "C"<< endl;
	else if (60 <= result && result <= 69)
		cout << "D"<< endl;
	else
		cout << "F"<< endl;
}
