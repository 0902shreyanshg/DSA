#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(11);

    // v.begin() + 2 denotes that v.begin() + 2 becomes the first element and the elements preceding it get rotated
    cout << "Vector gets rotated from 2nd element: " << endl;
    
    rotate(v.begin(), v.begin() + 2, v.end());

    for(int i : v){
        cout << i << " ";
    }

    return 0;
}