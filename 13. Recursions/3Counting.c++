#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

void counting(int n){
    // Base case
    if(n == 0){
        return; // ONLY return 
    }

    // Recursive relation
    counting(n-1);

    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    cout << endl;
    counting(n);
    return 0;
}
