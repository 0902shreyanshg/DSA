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
    int i = 2;
    cout << sizeof(i) << endl;

    int *ptr = &i;
    cout << sizeof(ptr) << endl << endl;
    
    char ch = 'q';
    cout << sizeof(ch) << endl;
    
    char *c = &ch;
    cout << sizeof(c) << endl;

    return 0;
}