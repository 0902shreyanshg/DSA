#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

// Address = &num, 
//           ptr 
// Value = num,
//         *ptr

int main()
{
    int num = 5;
    cout << num << endl;

    // address of operator - &
    cout << "address of num is: " << &num << endl;

    int *ptr = &num;

    //address of num using pointer (will give the same value)
    cout << "address of num is: " << ptr << endl;

    // Both will print the same value
    cout << "Value is: " << *ptr << endl;
    cout << "Value is: " << num << endl;

    // Printing size
    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;

    // double
    double d = 4.3;
    double *p2 = &d;
    cout << "Size of pointer is: " << sizeof(p2) << endl;

    return 0;
}