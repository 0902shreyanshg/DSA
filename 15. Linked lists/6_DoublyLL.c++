#include<iostream>
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
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << value << endl;
    }
};

// traversing LL
void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &tail, Node* &head, int d) {
    // EMPTY LIST
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &tail, Node* &head, int d) {
    // EMPTY LIST
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    // Inserting at first position
    if(position == 1) {
        insertAtHead(tail, head, d);
        return; //! WHY?
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return; //! WHY?
    }

    // Inserting in middle
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
    cout << endl;
}

void deleteNode(int position, Node* & head) {
    if(position == 1) {
        // We cannot delete head, so we will store it in temp
        Node* temp = head; 
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL; 
        // memory free start node
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        // To reach the position
        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    // EMPTY LIST
    Node* head = NULL;
    Node* tail = NULL;

    // cout used only in getLength and not in print as print function has cout in the function
    print(head);
    cout << getLength(head) << endl;
    
    insertAtHead(tail, head, 11);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    insertAtHead(tail, head, 13);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    insertAtHead(tail, head, 8);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    insertAtTail(tail, head, 100);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    insertAtPosition(tail, head, 2, 99999);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    insertAtPosition(tail, head, 1, 11111111);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    insertAtPosition(tail, head, 7, 88888888);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    deleteNode(6, head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl << endl;

    return 0;
}