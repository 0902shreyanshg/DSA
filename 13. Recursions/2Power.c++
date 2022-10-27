#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

int power(int n){
    // Base case
    if(n == 0){
        return 1;
    }

    // Recursive relation
    int smallerProb = power(n - 1);
    int biggerProb = 2 * smallerProb;

    return biggerProb;
}

int main()
{
    int n;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;

    return 0;
}