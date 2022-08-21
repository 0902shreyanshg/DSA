#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
int fibonacci(int n){
    int ans;

    if(n == 1 || n == 2){
        return 1;
    }
    else{
        ans = fibonacci(n-1) + fibonacci(n-2);
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}