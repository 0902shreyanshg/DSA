#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    vector <int> v;

    v.push_back(12);
    v.push_back(30);
    v.push_back(28);
    v.push_back(79);
    v.push_back(19);
    v.push_back(35);

    sort(v.begin(), v.end());

    cout << "Sorted vector: " << endl;

    for(int i : v){
        cout << i << " ";
    }

    return 0;
}