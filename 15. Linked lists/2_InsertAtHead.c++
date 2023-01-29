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
    Node* next;

    // Constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

// INSERTION
// head is a pointer to the first node
void insertAtHead(Node* &head, int d) {
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head) {
    // creating temp POINTER as we have taken input as by reference because we don't want to change the original LL
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp-> data << " ";
        // Moving temp ahead
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    // creating a object/new node in heap
    Node* node1 = new Node(10);

    // head pointed to node1
    Node* head = node1;
    print(head);
    
    insertAtHead(head, 12);
    print(head);
    
    insertAtHead(head, 15);
    print(head);

    return 0;
}