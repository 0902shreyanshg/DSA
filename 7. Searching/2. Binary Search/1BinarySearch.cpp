#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // IF BOTH start & end are INT_MAX

    while(start <= end){
        if(arr[mid] == key){  // mid is index NOT THE ARRAY VALUE 
            return mid;
        }

        // go to right wala part
        else if(key > arr[mid]){
            start = mid + 1;
        }

        // go to left wala part
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2; // UPDATING mid for a NEW start or NEW end
    }
    return -1;
}

int main()
{
    // Linear search -> KEY wala
    // ONLY MONOTONIC FUNCTIONS
    // MIDDLE ELEMENT 
    // IDHAR CODE AADHE SIZE KA HO JAATA HAI TOH IT'S GOOD
    // O(logn)
    
    int even[4] = {1, 2, 3, 4};
    int odd[5] = {1, 2, 3, 4, 5};

    int evenIndex = binarySearch(even, 4, 4);
    int oddIndex = binarySearch(odd, 5, 5);    

    cout << "Even array index if element is found: " << evenIndex << endl;
    cout << "Odd array index if element is found: " << oddIndex << endl;
    return 0;
}