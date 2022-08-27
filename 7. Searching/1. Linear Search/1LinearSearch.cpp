#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

bool find(int arr[], int n, int a){
    for(int i = 0; i < n; i++){
        if(arr[i] == a){
            return 1;
        }
    }
    return 0;   // AFTER LOOP ENDS, IT WILL return 0, i.e return 0 WILL BE OUTSIDE THE LOOP, SINCE KEY WAS NOT FOUND IN THE LOOP, THEN return 0
}

int main()
{
    int array[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key;
    cin >> key;

    bool found = find(array, 10, key);
    if(found){
        cout << "Element found.";
    }
    else{
        cout << "Element not found.";
    }

    return 0;
}