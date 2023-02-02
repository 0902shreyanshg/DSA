#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        // Memory free
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void deleteNode(Node* &tail, int value) {
    // empty list
    if(tail == NULL) {
        cout << "List is empty, please check again " << endl;
        return;
    }
    else {
        // non-empty list
        // assuming that "value" is present in the Linked list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 Node linked list
        if(curr == prev) {
            tail = NULL;
        }

        // >=2 Node linked list
        if(tail = curr) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void insertNode(Node* &tail, int element, int d) {
    
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        // assuming that the element is present in the list
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail) {
    // or you may use do while loop
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    cout << tail->data << " ";

    while(temp->next != tail) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* tail = NULL;

    // empty list mein insert kar rahe hai
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    //! ERROR

    return 0;
}