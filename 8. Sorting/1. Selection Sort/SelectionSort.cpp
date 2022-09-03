#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>

using namespace std;

// Used for SMALL SIZE ARRAYS/VECTORS, i.e. when space complexity needs to be kept minimum

// TIME COMPLEXITY: O(n^2) i.e. (n-1) & (n-2)
// BEST CASE: already sorted, O(n^2)
// WORST CASE: reverse sorted, O(n^2)

// SPACE COMPLEXITY: 

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    vector<int> arr;

    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(9);
    arr.push_back(8);

    cout << endl
         << "BEFORE using selection sort: " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }

    selectionSort(arr, 9);

    cout << endl
         << endl
         << "AFTER using selection sort: " << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}