#ifndef _STACK_H_
#define _STACK_H_
#include "Linklist.h"
#include <iostream>

using namespace std;

class Stack
{

public:
    Linklist stack;
    Stack();
    void push(int a);
    int pop();
    bool isEmpty();
};
void Stack::push(int a) {
    stack.push(a);
}
int Stack::pop() {
    if (!isEmpty()) {
        int a = stack.returnHead()->data;
        stack.head = stack.head->next;
    }
    else{
    cout<<"Stack is Empty"<<endl;
    return 0;
    }
}
bool Stack::isEmpty() {
    if (stack.head != nullptr) {
        return true;
    }
    return false;
}


#endif