#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s+1; i < e; i++)
    {
        if(arr[i] <= pivot){
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal lete hai
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);

    // Recursive call
    quickSort(arr, s, p - 1); // left part sort 
    quickSort(arr, p + 1, e); // right part sort
}

int main()
{
    int arr[15] = {3, 7, 6, 5, 3, 2, 8, 9, 74, 45, 25, 35, 46, 12, 23};
    int n = 15;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}