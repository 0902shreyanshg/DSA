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
    int temp[10] = {88, 34};

    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl; // size of 88 i.e. int
    cout << sizeof(&temp) << endl << endl; // Size of address

    int *ptr = &temp[0];
    // Because your computer is a 32 bit computer the pointer size can be 4 bytes
    // for 64 bit computer the pointer size can be 8 bytes
    cout << "Size of ptr: " << sizeof(ptr) << endl; // Address
    cout << "Size of *ptr: " << sizeof(*ptr) << endl; // memory allocated for int = 4
    cout << "Value of *ptr: " << *ptr << endl; 
    cout << "" << sizeof(&ptr) << endl;

    return 0;
}