#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <deque> // YOU INCLUDE THIS FOR DEQUE OPERATIONS IN STL
 
using namespace std;

int main()
{
    // Here, we have multiple fixed static arrays (to implement it) & tracking takes place that your data is stored in which array
    deque <int> d;

    d.push_back(1);
    d.push_front(2); // HERE YOU CAN APPLY POP, INSERTION & DELETION BOTH AT THE BEGINNING AND END. 
    d.push_front(3); 

    for(int i : d){
        cout << i << " ";    
    }
    cout << endl << endl;

    // d.pop_back();
    // d.pop_front();

    // for(int i : d){
    //     cout << i << " ";
    // }
    
    cout << d.at(0) << endl << endl;

    cout << d.front() << endl << endl;

    cout << d.back() << endl << endl;

    cout << d.empty() << endl << endl; // True : 1 & False : 0

    // front() returns a reference to the first element, begin() returns an iterator to it

    d.erase(d.begin(), d.end()); // YOU HAVE TO SPECIFY THE ARGUMENT IN THE BRACKET

    cout << "Size after using erase function: " << d.size() << endl << endl;

    for(int i : d){
        cout << i << " ";    
    }
    cout << endl << endl;

    return 0;
}