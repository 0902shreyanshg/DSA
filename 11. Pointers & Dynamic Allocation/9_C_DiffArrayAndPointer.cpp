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
    int arr[10];

//ERROR:
    // arr = arr + 1;

    int *ptr = &arr[0]; 
    cout << "Value of ptr: " << ptr << endl;

    ptr = ptr + 1;
    cout << "Value of ptr + 1: " << ptr << endl;
    
    return 0;
}