// REVERSE ARRAY

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// Time Complexity: O(n)
// This needs O(n) extra space and is an example of a not-in-place algorithm.

void reverseArray(int arr[], int n)
{
    int rev[n];

    // Create an array to store the reversed elements
    for (int i = 0; i < n; i++)
    {
        rev[n - i - 1] = arr[i];
    }

    // Now copy the reversed elements back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = rev[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    reverseArray(arr, 10);
    printArray(arr, 10);

    return 0;
}