#include <iostream>
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

    // int *p = 0;
    // Below is SAME as above

    //first initialising to 0 and then changing the value
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    // Gives the same results
    int *q = &i;

    cout << q << endl;
    cout << *q << endl;

    return 0;
}