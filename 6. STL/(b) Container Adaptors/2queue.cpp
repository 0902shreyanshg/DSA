#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <queue> // YOU INCLUDE THIS FOR QUEUE OPERATIONS IN STL
 
using namespace std;
 
int main()
{
    // FIFO
    // Shaadi ki line mein jo pehle lagega usse pehle shaahi paneer milega
    queue <string> q;
    q.push("Shreyansh");
    q.push("Vinay");
    q.push("Gautam");

    cout << "Front element (NOT TOP): " << q.front() << endl; 
    cout << "Size: " << q.size() << endl;

    q.pop(); // No need to specify pop_back or pop_front as it's a stack
    cout << "First Element: " << q.front() << endl;
    cout << "Size after using pop: " << q.size() << endl; 
    return 0;
}