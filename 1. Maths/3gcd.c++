#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

// Iterative approach
int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    else if(b == 0){
        return a;
    }
    while(a != b){
        if(a < b){
            b = b - a;
        }
        else{
            a = a - b;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the values of a & b: " << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << "The GCD of " << a << " & " << b << " is: " << ans << endl; 

    return 0;
}