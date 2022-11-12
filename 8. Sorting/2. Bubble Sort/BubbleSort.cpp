#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>

using namespace std;

// TIME COMPLEXITY: O(n^2)
// BEST CASE: already sorted, O(n): see below the bool swapped
// WORST CASE: reverse sorted

// SPACE COMPLEXITY: only variables, constant space so, O(1)

void bubbleSort(vector<int> &arr, int n)
{
    bool swapped = false; // FOR OPTIMIZATION, O(n)

    for (int i = 0; i < n - 1; i++) // for(int i = 1; i < n; i++)
    // for round 1 to n-1
    {
        for (int j = 0; j < n - i - 1; j++) // for(int j = 0; j = n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = true;
        }
        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

int main()
{
    vector<int> arr;

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

    bubbleSort(arr, n);

    cout << endl
        << endl
        << "AFTER using bubble sort: " << endl;

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}