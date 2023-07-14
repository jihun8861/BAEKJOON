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

	}
};

class Queue {
	int queue[100];
	int index;
public:
	Queue() { index = 0; }
	void inqueue(int num) {
		queue[index] = num;
		index += 1;
	}
	void dequeue() {

	}
	void showQue() {

	}
	void sortQ() {

	}
};

int main() {
	Stack s;
	Queue q;
	int num;

}