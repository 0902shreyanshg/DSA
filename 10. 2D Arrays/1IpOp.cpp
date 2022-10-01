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
    int arr[3][4];

    // ROW wise input
    // i -> row
    // j -> column
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    // COLUMN wise input
    // j -> row
    // i -> column
    // for(int j = 0; j < 4; j++){
    //     for(int i = 0; i < 4; i++){
    //         cin >> arr[i][j];
    //     }
    // }

    // print
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl; // GIVING IT THE SHAPE OF A 2D ARRAY
    }

    return 0;
}