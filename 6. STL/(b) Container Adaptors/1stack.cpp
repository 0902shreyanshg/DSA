#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <stack> // YOU INCLUDE THIS FOR STACK OPERATIONS IN STL

using namespace std;
 
int main()
{
    // LIFO, Shaadi ki plates
    stack <string> s;

    s.push("Shreyansh");
    s.push("Vinay");
    s.push("Gautam");

    cout << "Top element (not front): " << s.top() << endl; // Here we use top() not front(), its obvious as it's a stack
    // YOU CANNOT ACCESS THE BOTTOM ELEMENT OF THE STACK

    s.pop(); // No need to specify pop_back or pop_front as it's a stack
    cout << "Top element after pop: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    cout << s.empty();
    // YOU CANNOT PRINT ALL THE ELEMENTS OF THE STACK AS YOU DID IN SEQUENCE CONTAINERS
    
    return 0;
}