#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int sum(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}

int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n);
    return 0;
}