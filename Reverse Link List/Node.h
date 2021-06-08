#pragma once
#ifndef _NODE_H_
#define _NODE_H_

class Node {
public:
    int data;
    Node* next;

    Node(int a){
        data = a;
        next = nullptr;
    }
};

#endif //!_NODE_H_