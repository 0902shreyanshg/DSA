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
    int i = 5;
    int *ptr = &i;
    int** ptr2 = &ptr;

    cout << "Printing i: " << i << endl;
    cout << "Printing value of ptr (*ptr): " << *ptr << endl;
    // DOUBLE POINTER
    cout << "Printing **ptr2: " << **ptr2 << endl << endl;

    cout << "Address of i: " << &i << endl;
    cout << "Printing ptr: " << ptr << endl;
    cout << "Printing *ptr2: " << *ptr2 << endl << endl;

    cout << "Address of ptr: " << &ptr << endl;
    cout << "Printing of ptr2: " << ptr2 << endl;

    return 0;
}