#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void print(int arr[], int n, int start = 0 /* Using Default Argument*/)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    int size = 5;
    int start;
    cin >> start;

    print(arr, size, start);
    cout << endl;
    print(arr, size);

    return 0;
}