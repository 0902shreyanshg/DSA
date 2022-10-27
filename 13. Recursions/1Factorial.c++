#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int factorial(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}