#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    // creation
    stack <int> s;

    // push
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // pop
    s.pop();

    // top 
    cout << "Printing top element: " << s.top() << endl;

    // empty
    if(s.empty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    // size
    cout << "Size of the stack is: " << s.size() << endl;

    return 0;
}