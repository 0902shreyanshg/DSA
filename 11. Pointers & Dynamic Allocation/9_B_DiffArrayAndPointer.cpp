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
    int arr[20] = {1, 2, 3, 4};

    // & operator
    // Prints the same
    cout << "-> " << &arr[0] << endl;
    cout << "   " << &arr << endl;
    cout << "   " << arr << endl << endl;

    // ptr
    // TRY UNCOMMENTING:
    // int *ptr = &arr; DOESNOT WORK
    // int *ptr = arr; WORKS
    int *ptr = &arr[0]; 
    cout << "   " << ptr << endl;
    cout << "Value of *ptr: " << *ptr << endl;
    cout << "---> " << &ptr << endl << endl;

    // -> 
    // THESE ARE DIFFERENT ADDRESSES 0x61fec0 & 0x61febc
    return 0;
}