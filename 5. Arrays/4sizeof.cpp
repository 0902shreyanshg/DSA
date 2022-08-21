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
    cout << endl;
}

int main()
{
    int first[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(first, 10);                           // YOU CANNOT WRITE first[]; you've to write first i.e. NAME OF THE ARRAY ONLY

    int firstSize = sizeof(first) / sizeof(int);     // YOU CANNOT WRITE sizeof(first[]), only name of the array is required
    cout << "Size of the array is: " << firstSize << endl;

    int Second[15] = {1, 2};  // Bhale hi 2 elements hi daale ho but woh size poore array ka dega
    printArray(Second, 15);                           

    int SecondSize = sizeof(Second) / sizeof(int);     
    cout << "Size of the array is: " << SecondSize << endl;

    return 0;
}