// https://whimsical.com/c-stl-XVxuHHof5GTWA4NXZhXQhx


#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <array> // YOU INCLUDE THIS FOR ARRAY OPERATIONS IN STL
 
using namespace std;
 
int main()
{
    // Implementation of STL array is same as the basic array
    int basic[4] = {1, 2, 3, 4};
    array <int, 4> a = {1, 2, 3, 4}; // SYNTAX FOR ARRAYS IN STL: array <int, size> name

    int size = a.size();

    for(int i = 0; i < size; i++){ // size = a.size
        cout << a[i] << endl;      // Accessing an array in STL
    }

    cout << "Element at 2nd index: " << a.at(2) << endl;

    cout << "Empty or not: " << a.empty() << endl;

    cout << "First Element: " << a.front() << endl;

    cout << "last Element: " << a.back() << endl;
    return 0;
}