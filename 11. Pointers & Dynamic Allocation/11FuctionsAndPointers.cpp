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
    // there is no change with the above statement as value is passed with the 
    // help of a pointer through the argument/function
    // REFER pass by value
    
    *p = *p + 1;
}
    
int main()
{
    int value = 5;
    int *p = &value;

    print(p);

    cout << "Before: " << p << endl;
    update(p);
    cout << "After: " << p << endl;

    return 0;
}