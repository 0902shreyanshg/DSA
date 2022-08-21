#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

// 1 -> is Prime
// 0 -> is not prime

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    cout << isPrime(n);
    return 0;
}