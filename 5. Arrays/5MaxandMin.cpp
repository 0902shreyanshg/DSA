
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int n)
{
    int maxi = INT_MIN; // MINIMUM value an int can provide
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]); // UPDATING maxi EVERY TIME WE FIND A BIGGER VALUE
        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int main()
{
    int size;
    cin >> size;
    int arr[1000]; // Array tu kitne bhi size ka le le dost, BUT NEVER DO THIS: arr[size] EXCEPT IN CASE OF POINTERS

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Max element is: " << getMax(arr, size) << endl;
    cout << "Min element is: " << getMin(arr, size) << endl;

    return 0;
}

// O(n)