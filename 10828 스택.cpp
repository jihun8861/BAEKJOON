#include <iostream>
#include <string>
using namespace std;
class Stack {
    int stack[10000];
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

    int size() {
        return index;
    }

    int empty() {
        if (index == 0)
            return 1;
        return 0;
    }

    int top() {
        if (index == 0)
            return -1;
        return stack[index - 1];
    }
};

int main() {
    Stack s;
    int N;
    cin >> N;

    string cmd;
    int num;

    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            s.push(num);
        }
        else if (cmd == "pop") {
            s.pop();
        }
        else if (cmd == "size") {
            cout << s.size() << endl;
        }
        else if (cmd == "empty") {
            cout << s.empty() << endl;
        }
        else if (cmd == "top") {
            cout << s.top() << endl;
        }
    }
}