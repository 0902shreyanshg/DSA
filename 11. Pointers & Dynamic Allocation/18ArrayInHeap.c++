#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int GetSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // Array in heap memory
    // int *arr = new int[5];

    int n;
    cin >> n;

    // Variable size array
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = GetSum(arr, n);
    cout << "Answer is: " << ans << endl;
    
    return 0;
}