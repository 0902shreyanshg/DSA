// REVERSE ARRAY

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// Time Complexity: O(n)
// This needs O(1) extra space for exchanging elements and is an example of an in-place algorithm.

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
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