#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// MERGE SORT is FASTEST out of all sorting algorithms

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s - 1;
    int len2 = e - mid;

    // variable size ke array ke liye heap memory

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }

        while (index1 < len1)
        {
            arr[mainIndex++] = first[index1++];
        }

        while (index2 < len2)
        {
            arr[mainIndex++] = second[index2++];
        }
    }
}

void mergeSort(int *arr, int s, int e)
{

    // base case {for arrays}
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    // merging the arrays
    merge(arr, s, e);
}

int main()
{
    int arr[15] = {3, 7, 6, 5, 3, 2, 8, 9, 74, 45, 25, 35, 46, 12, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}