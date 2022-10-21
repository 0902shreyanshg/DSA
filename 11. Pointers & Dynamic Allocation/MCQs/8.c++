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
    int first = 110;
    int *p = &first;
    int **q = &p;

    // pehle 'second' nikal lo uske baad increment karo
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    return 0;
}