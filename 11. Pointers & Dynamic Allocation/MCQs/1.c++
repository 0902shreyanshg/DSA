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
    int first = 8;
    int *p = &first;

    // post increment so value pehle print hogi and then increment hoga
    cout << (*p)++ << " ";
    cout << first << endl;

    return 0;
}