#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void reverse(string& name, int i, int j){
    cout << "call recieved for " << name << endl;
    // base case
    if(i > j){
        return;
    }
    
    swap(name[i], name[j]);
    
    reverse(name, i+1, j-1); // WHY THIS reverse(name, i++, j--); doesnot work???????????
}

int main()
{
    string name = "risebmoti";
    cout << endl;
    reverse(name, 0, name.length() - 1);
    cout << endl;
    cout << name << endl;
    return 0;
}