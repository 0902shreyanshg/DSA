#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    // create a queue
    queue <int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "Front of the queue: " << q.front() << endl;
    q.push(5);
    cout << "Size of the queue: " << q.size() << endl; 

    q.pop();
    cout << "Size of the queue: " << q.size() << endl; 

    if(q.empty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}