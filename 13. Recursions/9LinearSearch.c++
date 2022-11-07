#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

bool Search(int arr[], int size, int k)
{
    printArray(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        // recursive relation
        return Search(arr + 1, size - 1, k);
    }
    return false;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int k = 6;
    bool ans = Search(arr, size, k);
    if (ans)
    {
        cout << "Present " << endl;
    }
    else
    {
        cout << "Absent " << endl;
    }
    return 0;
}