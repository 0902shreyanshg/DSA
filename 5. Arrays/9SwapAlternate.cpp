#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapElements(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)   // NOT (i + 2), IT SHOULD BE (i += 2)
    {
        if(i + 1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }         // NOW MAKE A PRINT FUNCTION TO PRINT THE ARRAY
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {7, 8, 9, 10, 11};

    swapElements(arr, 6);
    swapElements(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}