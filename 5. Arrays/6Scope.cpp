#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int update(int arr[], int n)
{
    arr[0] = 120; // updating the array
    cout << "Array value after using update function: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    // FIRST PRINT
    cout << "FIRST PRINT:" << endl;
    cout << "Original array in main function: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    // SECOND PRINT
    cout << "SECOND PRINT:" << endl;
    update(arr, 3);

    // THIRD PRINT
    cout << endl
         << "THIRD PRINT:" << endl;
    cout << "Original array in main function after calling update function: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}