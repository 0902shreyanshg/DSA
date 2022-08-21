// An array of 0's and 1's is given to you; output should contain 0 on the right and 1 on the left
// USING TWO POINTER APPROACH

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

void sortOne(int arr[], int size)
{
    int left = 0;
    int right = (size - 1);
    while (left < right)
    {
        while (arr[left] == 0 && left < right) // ALSO INCLUDE THE CONDITION left < right
        {
            left++;
        }
        while (arr[right] == 1 && left < right) // ALSO INCLUDE THE CONDITION left < right
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]); // It should be arr[left], arr[right]; Not the other way around
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[10] = {0, 0, 1, 0, 1, 1, 0, 1, 1, 0};
    sortOne(arr, 10);
    printArray(arr, 10);
    return 0;
}