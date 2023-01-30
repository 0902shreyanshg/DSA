#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this -> data;
        // memory free
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};


void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}


void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // For position 1, we have to add another case as
    // we've started from 1st position & to insert we always require previous node
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // For updating at tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void print(Node *&head)
{
    // creating temp POINTER as we have taken input as by reference because we don't want to change the original LL
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        // Moving temp ahead
        temp = temp->next;
    }
    cout << endl;
}


void deleteNode(int position, Node* & head) {
    if(position == 1) {
        // We cannot delete head, so we will store it in temp
        Node* temp = head; 
        head = head -> next;
        // memory free start node
        temp -> next = NULL; // because we are deleting temp
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;

        curr -> next = NULL;
        delete curr;
    }
}


int main()
{
    // creating a object/new node in heap
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 18);
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtPosition(tail, head, 3, 100);
    print(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    deleteNode(6, head);
    print(head);

    cout << "Head: " << head->data << endl;
    //! WHEN LAST NODE GETS DELETED, HOW WILL YOU HANDLE TAIL??
    cout << "Tail: " << tail->data << endl;

    return 0;
} 