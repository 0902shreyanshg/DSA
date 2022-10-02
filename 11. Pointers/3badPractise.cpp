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
    // Pointer to int is created, and pointing to some garbage address
    // int *p;
    // cout << *p << endl;

    // Segmentation fault: i.e. no such memory exists 
    int *p = 0;
    cout << *p << endl;


    return 0;
}