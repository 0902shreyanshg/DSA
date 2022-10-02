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
    a++;

    cout << "Value of num: " <<  num << endl;
    cout << "Value of a: " << a << endl;
    cout << "Before: " << num << endl;
    cout << "After: " << num << endl << endl;

    // CASE 2:
    int *p = &num;
    cout << "Before: " << num << endl;
    (*p)++;
    cout << "After: " << num << endl << endl;

    // CASE 3:
    int b = *p;
    b++;

    cout << "Value of num: " <<  num << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}