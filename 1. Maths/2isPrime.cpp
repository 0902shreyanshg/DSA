#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

bool isPrime(int n)
{
    if(n <= 1){
        return false;
    }

    for (int i = 2; i < n; i++) // i < n NOT i <= n
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }

    return 0;
}