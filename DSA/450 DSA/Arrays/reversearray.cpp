// Write a program to reverse an array or string

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ReverseArray (int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    ReverseArray(arr ,start + 1, end - 1); //calling the function again
}

void PrintArray (int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    PrintArray (arr, 6);
    ReverseArray (arr, 0 , 5); //reversing the array
    PrintArray (arr, 6); //printing reversed array 
    return 0;
}
