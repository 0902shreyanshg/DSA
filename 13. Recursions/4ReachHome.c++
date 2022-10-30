#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

void reachHome(int src, int dest){
    cout << "Source " << src << " Destination " << dest << endl;

    // Base case
    if(src == dest){
        cout << "Pahauch gaya... " << endl;
        return;
    }

    src++;
    // Recursive function
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    cout << endl;
    reachHome(src, dest);
    return 0;
}