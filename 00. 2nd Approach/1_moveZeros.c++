#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void move(int arr[], int n)
{
    // non-zero digits
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {10, 8, 0, 0, 12, 0};
    int n = sizeof(arr) / sizeof(int);

    move(arr, n);
    return 0;
}