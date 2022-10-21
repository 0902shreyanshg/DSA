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
    // CASE 1:
    int num = 5;
    int a = num;
    cout << "Value of a (before): " << a << endl;
    a++;

    cout << "Value of num: " <<  num << endl;
    cout << "Value of a (after): " << a << endl << endl;

    // CASE 2:
    int *p = &num; // num ka address p mein store kar diya
    cout << "Before: " << num << endl;
    (*p)++;
    cout << "After: " << num << endl << endl;

    // CASE 3:
    int b = *p;

    cout << "Value of b (Before): " << b << endl;
    b++;
    cout << "Value of num: " <<  num << endl;
    cout << "Value of b (After): " << b << endl;

    return 0;
}