#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int n)
{
    int start = 0; // YOU HAVE TO ASSIGN INDEX POSITION NOT INDEX VALUE!!
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]); // HERE ARRAY VALUES HAVE TO BE SWAPPED NOT THE ARRAY POSITIONS
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};  // Even number of elements 
    int brr[5] = {7, 8, 9, 10, 11};   // Odd number of elements

    reverse(arr, 6);
    reverse(brr, 5);

    print(arr, 6);
    print(brr, 5);
    return 0;
}