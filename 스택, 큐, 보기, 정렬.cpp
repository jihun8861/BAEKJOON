#include<iostream>
using namespace std;
class Stack {
	int stack[100];
	int index;
public:
	Stack() { index = 0; }
	void push(int num) {
		stack[index] = num;
		index++;
	}

	void pop() {
		if (index == 0) {
			cout << -1 << endl;
		}
		else {
			cout << stack[index - 1] << endl;
			index--;
		}
	}
	void showStack() {
		for (int i = 0; i < index; i++) {
			cout << stack[i] << ' ';
		}
		cout << endl;
	}
	void sortQ() {
		int tmp;
		for (int i = 0; i < index; i++) {
			for (int j = i; j < index; j++) {
				if (stack[i] > stack[j])
				{
					tmp = stack[i];
					stack[i] = stack[j];
					stack[j] = tmp;
				}
			}
		}
	}
};

class Queue {
	int queue[100];
	int index;
public:
	Queue() { index = 0; }
	void inqueue(int num) {
		queue[index] = num;
		index++;
	}
	void dequeue() {
		for (int i = 0; i < index; i++) {
			queue[i] = queue[i + 1];
		}
		index--;
	}
	void showQue() {
		for (int i = 0; i < index; i++) {
			cout << queue[i] << ' ';
		}
		cout << endl;
	}
	void sortQ() {
		int tmp;
		for (int i = 0; i < index; i++) {
			for (int j = i; j < index; j++) {
				if (queue[i] > queue[j])
				{
					tmp = queue[i];
					queue[i] = queue[j];
					queue[j] = tmp;
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
			q.showQue();
			s.showStack();
		}
		else if (choice == 4) {
			cout << "정렬을 진행합니다." << endl;
			q.sortQ();
			s.showStack();
		}
	}

}