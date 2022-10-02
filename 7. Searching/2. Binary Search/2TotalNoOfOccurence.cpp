#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
 
using namespace std;

int lastOcc(vector <int> arr, int n, int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1; // Only change here (wrt Binary search)
        }

        else if(arr[mid] < k){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int firstOcc(vector <int> arr, int n, int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1; // Only change here (wrt Binary search)
        }

        else if(arr[mid] < k){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
 
int main()
{
    vector <int> arr = {1, 2, 3, 3, 3, 3, 3, 3, 4, 5};

    int first = firstOcc(arr, 10, 3);
    int last = lastOcc(arr, 10, 3);

    // Total number of occurrences: 
    cout << "Answer is: " << last - first + 1;

    return 0;
}