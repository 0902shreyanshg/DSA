#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <set> // YOU INCLUDE <set> FOR SET OPERATIONS IN STL

using namespace std;

int main()
{
    // ONLY UNIQUE ELEMENTS ARE STORED INSIDE
    // Implemented using BST, so Time complexity = O(log(n))
    // You cannot modify an element, you either MODIFY or DELETE it
    // elements are returned in SORTED order
    // set is SLOWER than unordered set
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    s.insert(7);

    // PRINTS IN SORTED ORDER AS IT IS A SET
    for (auto i : s) // UNDERSTAND THIS
    {
        cout << i << " ";
    }

    // begin element will be deleted and others will be printed
    s.erase(s.begin());

    cout << endl
         << "Begin element is deleted & all others are printed: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl
         << endl;

    // IF YOU WANT TO DELETE ONLY 1 AND PRINT THE REST ELEMENTS

    // WRONG method
    // s.erase(s.begin() + 1);

    set<int>::iterator it = s.begin(); // define the iterator first
    it++;                              // Then set the iterator on the element

    s.erase(it);     // 5 WILL BE DELETED
    for (auto i : s) // IT WILL BE i : s NOT i : it
    {
        cout << i << " ";
    }

    cout << endl
         << "7 is present or not: " << s.count(7);
    cout << endl
         << "5 is present or not: " << s.count(5);

    set<int>::iterator itr = s.find(5); 

    for (auto it = itr; it != s.end(); it++) // using it iterator to find 5, AGAR 5 MILA TOH 5 SE GINTI CHAALU KAR DEGA
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}