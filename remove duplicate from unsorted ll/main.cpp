// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


class Solution {
public:
    //Function to remove duplicates from unsorted linked list.
    Node* removeDuplicates(Node* head) {
        // your code goes here
        Node* previous = NULL;
        Node* current = head;
        unordered_map<int, int>m;
        while (current!= NULL) {
            int temp = current->data;
            if (m.find(temp) != m.end()) {
                previous->next = current->next;
                current = current->next;
            }
            else {
                m[temp]++;
                previous = current;
                current = current->next;
            }
        }
        return head;
    }

};

int main() {
    int K;
    cin >> K;
    struct Node* head = NULL;
    struct Node* temp = head;

    for (int i = 0;i < K;i++) {
        int data;
        cin >> data;
        if (head == NULL)
            head = temp = new Node(data);
        else {
            temp->next = new Node(data);
            temp = temp->next;
        }
    }

    Solution ob;
    Node* result = ob.removeDuplicates(head);
    print(result);
    cout << endl;
}

