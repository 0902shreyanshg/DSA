#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        { // TRY TO REMOVE THE IF CONDITION AND THEN APPLY THE CODE ;)
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}; // Even number of elements
    int brr[5] = {7, 8, 9, 10, 11};  // Odd number of elements

    swap(arr, 6);
    swap(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}