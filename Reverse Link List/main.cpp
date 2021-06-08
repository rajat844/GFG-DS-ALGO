#include <iostream>
#include "Node.h"
#include "Linklist.h"

using namespace std;
void printListNode(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout<<endl;
}

Node* reverseList1(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    Node* temp = reverseList1(head->next);
    head->next->next = head;
    head->next = nullptr;
    return temp;
}

Node* tailtohead(Node* head) {
    Node* seclast;
    Node* last;
    seclast = head;
    while (seclast->next->next != nullptr) {
        seclast = seclast->next;
        last = seclast->next;
    }
    seclast->next = nullptr;
    last->next = head;

    return last;
}


int main() {
    //LINK LIST OPERATIONS
    // int size;
    // cin >> size;
    // Linklist list;
    // for (int i = 0; i < size;i++) {
    //     int temp;
    //     cin >> temp;
    //     list.push(temp);
    // }
    // list.printList();
    // list.reverseList();
    // list.printList();

    // Node* head = list.returnHead();
    // head = reverseList1(head);
    // printListNode(head);
    // head = tailtohead(head);
    // printListNode(head);

    //STACK OPERATIONS
    
    return 0;
}