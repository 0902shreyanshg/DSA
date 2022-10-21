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
    int arr[6] = {11, 21, 31};
    int *p = arr;

    // p[2] ---> *(p + 2)
    cout << p[2] << endl;

    return 0;
}