#ifndef _LINKLIST_H_
#define _LINKLIST_H_
#include "Node.h"
#include <iostream>

using namespace std;

class Linklist
{
public:
    Node* head;
    Linklist() {
        head = nullptr;
    }
    void push(int data);
    void printList();
    void reverseList();
    Node* returnHead();

};

void Linklist::push(int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

void Linklist::printList() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void Linklist::reverseList() {
    Node* currNode = head;
    Node* preNode = nullptr;
    Node* nextNode = nullptr;

    while (currNode != nullptr) {
        nextNode = currNode->next;
        currNode->next = preNode;
        preNode = currNode;
        currNode = nextNode;
    }
    head = preNode;
}
Node* Linklist::returnHead() {
    return head;
}



#endif //!_LINKLIST_H_