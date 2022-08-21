#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <list> // YOU INCLUDE THIS FOR LIST OPERATIONS IN STL
 
using namespace std;

int main()
{
    // Here, implementation occurs due to doubly linked list (two pointers)
    // There is no direct access in lists like using .at() or list[i], we've to travel to the 4th element in order to reach the 4th element
    list <int> l;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    for(int i : l){
        cout << i << " ";
    }
    cout << endl << endl;

    cout << l.empty() << endl;
    cout << l.front() << endl;
    cout << l.back() << endl << endl;

    // This will throw error as below is iterator
    // cout << l.end() << endl;

    l.erase(l.begin()); // This will erase only the element in beginning only
    cout << "After Erase" << endl;
    for(int i : l){
        cout << i << " ";
    }
    cout << endl << endl;

    l.pop_back();
    cout << l.size() << endl;

    // YOU CANNOT USE CAPACITY IN LISTS....... WHY???????
    // l.capacity();

    // COPYING A LIST IN ANOTHER LIST
    list <int> riseb(l);
    cout << "Copied list riseb: " << endl;
    for(int i : riseb){
        cout << i << " ";
    }

    list <int> n(5, 100); // 5 Element rakhe hai aur sabko 100 se initialise kar de
    cout << endl << endl;
    for(int i : n){
        cout << i << " ";
    }

    return 0;
}