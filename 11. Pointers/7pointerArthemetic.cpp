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
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;

    cout << "Before t: " << t << endl;
    t = t + 1;
    // Moves ahead by 4 bytes 
    // after 8: 9, a, b, "c"
    cout << "After t: " << t << endl;

    // same case with subtraction

    return 0;
}