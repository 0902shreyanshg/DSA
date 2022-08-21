#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void intersection(int arr[], int brr[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];           // Taking a key in a nested for loop helps
        for (int j = 0; j < m; j++)
        {
            if (key == brr[j])
            {
                cout << key;
                brr[j] = INT_MIN;
                break;            // break is important
            }
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 3, 10};
    int brr[5] = {11, 22, 3, 44, 55};

    intersection(arr, brr, 10, 5);

    return 0;
}
