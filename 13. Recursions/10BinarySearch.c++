#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

void printArray(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k){
    printArray(arr, s ,e);
    // base case
    
    // element not found
    if(s > e){
        return false;
    }
    int mid = s + (e - s) / 2;
    cout << "Value of mid is: " << mid << endl << endl;

    // element found
    if(k == arr[mid]){
        return true;
    }

    if(arr[mid] < k){
        return binarySearch(arr, mid + 1, e, k);
    }
    else{
        return binarySearch(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 10};
    int size = 10;
    int k = 16;
    bool ans = binarySearch(arr, 0, 9, k);
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