#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int arr[15] = {2, 7};
    int n = 15;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    int count = 0;
    int i = 0;

    while(arr[i] != 0) {
        count++;
        i++;
    } 
    cout << count << endl;

    return 0;
}