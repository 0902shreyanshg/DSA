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
    int i = 5;

    // create a Reference variable
    int &j = i;

    cout << i << endl;
    cout << j << endl << endl;
    i++;
    cout << i << endl;
    cout << j << endl << endl;
    j++;
    cout << i << endl;
    cout << j << endl << endl;

    return 0;
}