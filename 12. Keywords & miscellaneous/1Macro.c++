#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

// Macro
// Code compile hone se pehle jaha jaha PI likha hoga waha value replace ho jaayegi with 3.14
// Without allocating memory
#define PI 3.14

int main()
{
    int r = 5;
    // double pi = 3.14;

    double area = PI * r * r;

    // Cannot update/change this
    // Expression must be a modifiable value
    // PI = PI + 1;

    cout << "Area is " << area << endl;

    return 0;
}