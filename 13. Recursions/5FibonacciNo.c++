#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int Fibonacci(int n){
    // Base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;    
    }

    // Recursive function
    return (Fibonacci(n - 1) + Fibonacci(n - 2));
} 

int main()
{
    int n;
    cin >> n;
    int ans = Fibonacci(n);
    cout << "The " << n << "th fibonacci number is " << ans << endl;
    return 0;
}