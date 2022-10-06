#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void update(int** p2){
    
    // First execution with only p = p + 1 ---> NO CHANGE OCCURS because of PASS BY VALUE
    // p2 = p2 + 1;

    // Second execution with only *p = *p + 1 ---> p was updated in main() as there was no p in update()
    // *p2 = *p2 + 1; 

    // Third execution with only **p = **p + 1 ---> i was updated in main() as there was no i in update()
    **p2 = **p2 + 1;

}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl << endl;
    update(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl << endl;

    return 0;
}