#include <bits/stdc++.h>

using namespace std;

class Stack {
public:
    queue<int> q1;
    queue<int> q2;

    void push(int n) {
        q1.push(n);
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1, q2);
    }

    int top() {
        return q2.front();
    }

    void pop() {
        q2.pop();

    }
};



int main() {

    Stack st = new Stack();


    return 0;
}