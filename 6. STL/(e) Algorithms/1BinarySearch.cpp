#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    vector <int> v;
    
    // Binary Search, put it in sorted order
    // use SORT FUNCTION to sort if necessary 
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);

    cout << binary_search(v.begin(), v.end(), 5) << endl; // argument must have from where to BEGIN, END and WHAT TO SEARCH

    cout << binary_search(v.begin(), v.end(), 7) << endl;
    
    return 0;
}