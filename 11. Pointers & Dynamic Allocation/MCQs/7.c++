#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void update(int *p){
    *p = *p * 2;
}

int main()
{
    int i = 10;
    update(&i);
    cout << i << endl;

    return 0;
}