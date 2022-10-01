#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

void LargestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;

    for (int i = 0; i < 3; i++) // row
    {
        int sum = 0;
        for (int j = 0; j < 4; j++) // column
        {
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
}

int main()
{
    int arr[3][4];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // GIVING IT THE SHAPE OF A 2D ARRAY
    }
    cout << endl;

    LargestRowSum(arr, 3, 4);
    
    return 0;
}