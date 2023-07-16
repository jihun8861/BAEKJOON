#include<iostream>
using namespace std;
class Stack {
	int arr[100];
	int index;
public:
	Stack() { index = 0; }
	void push(int num) {
		arr[index] = num;
		index++;
	}

	void pop() {
		if (index == 0) {
			cout << -1 << endl;
		}
		else {
			cout << arr[index - 1] << endl;
			index--;
		}
	}
	void showStack() {
		for (int i = 0; i < index; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	void sortQ() {
		int tmp;
		for (int i = 0; i < index; i++) {
			for (int j = i; j < index; j++) {
				if (arr[i] > arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
};

class Queue {
	int arr[100];
	int index;
public:
	Queue() { index = 0; }
	void inqueue(int num) {
		arr[index] = num;
		index++;
	}
	void dequeue() {
		for (int i = 0; i < index; i++) {
			arr[i] = arr[i + 1];
		}
		index--;
	}
	void showQue() {
		for (int i = 0; i < index; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	void sortQ() {
		int tmp;
		for (int i = 0; i < index; i++) {
			for (int j = i; j < index; j++) {
				if (arr[i] > arr[j]) {
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
};

int main() {
	Stack s;
	Queue q;
	int num;
	int choice;
	while (true) {
		cout << "1 Queue 2 Stack 3 보기 4 정렬 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "Queue" << endl;
			cout << "1 추가 2 빼기 >> ";
			cin >> choice;

			if (choice == 1) {
				cout << "input: ";
				cin >> choice;
				q.inqueue(choice);
			}
			else if (choice == 2) {
				cout << "out" << endl;
				q.dequeue();
			}
		}
		else if (choice == 2) {
			cout << "Stack" << endl;
			cout << "1 추가 2 빼기 >> ";
			cin >> choice;
			if (choice == 1) {
				cout << "input: ";
				cin >> choice;
				s.push(choice);
			}
			else if (choice == 2) {
				cout << "out" << endl;
				s.pop();
			}
		}
		else if (choice == 3) {
			s.showStack();
			q.showQue();
		}
		else if (choice == 4) {
			cout << "정렬을 진행합니다." << endl;
			s.sortQ();
			q.sortQ();
			s.showStack();
			q.showQue();
		}
	}

}