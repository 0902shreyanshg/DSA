#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// TIME COMPLEXITY: O(n^2)
// BEST CASE: already sorted, O(n)
// WORST CASE: reverse sorted, O(n^2)

// SPACE COMPLEXITY: only variables, constant space so, O(1)

void InsertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                // Shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // do not shift
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    vector <int> arr;

    arr.push_back(10);
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(14);
    arr.push_back(9);

    int n = arr.size();

    cout << endl
         << "BEFORE using bubble sort: " << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }

    InsertionSort(arr, n);

    cout << endl
         << endl
         << "AFTER using bubble sort: " << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}