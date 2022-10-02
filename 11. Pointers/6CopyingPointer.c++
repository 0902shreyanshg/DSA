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
    int num = 5;
    int *p = &num;

    // Copying a pointer
    int *q = p;
    cout << "Value of p: " << p << endl;
    cout << "Value of q: " << q << endl;
    cout << "Value of *p: " << *p << endl;
    cout << "Value of *q: " << *q << endl;

    return 0;
}