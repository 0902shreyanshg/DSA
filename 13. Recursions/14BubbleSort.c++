#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

void Search(int *arr, int n){
    // base case - already sorted
    if(n == 0 || n == 1){
        return;
    }

    // Solving for 1 case
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    // Recursive relation
    Search(arr, n-1);
}

int main()
{
    int arr[10] = {17, 15, 18, 13, 19, 16, 14, 12, 11, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    Search(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}