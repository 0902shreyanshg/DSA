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

int main()
{
    // creating object in heap
    Node* node1 = new Node(10);

    // Pointer hai toh arrow use hoga
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    
    return 0;
}