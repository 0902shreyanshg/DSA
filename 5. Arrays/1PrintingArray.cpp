#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int first[10] = {1, 2, 3, 4};
    printArray(first, 10);

    return 0;
}