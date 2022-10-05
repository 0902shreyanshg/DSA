#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void print(int *p){

    cout << p << endl;
    cout << *p << endl << endl;

}

void update(int *p){
    // p = p + 1;
    // cout << "Inside; updated value: " << p << endl;
    *p = *p + 1;
}
    
int main(int *p)
{
    int value = 5;
    int *p = &value;

    // TF ???????????????????????????????????????????????
    //  error: declaration of 'int* p' shadows a parameter
    //  int *p = &value;
    //       ^
    print(p);

    cout << "Before: " << p << endl;
    update(p);
    cout << "After: " << p << endl;

    return 0;
}