#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// whenever the compiler finds AREA(l, b) in the program it replaces it with 
// the macros definition i.e., (l*b)
#define AREA(l, b) (l * b)

int main()
{
    int l1 = 10, l2 = 5, area;

    area = AREA(l1, l2);
    cout << "Area of the rectangle is: " << area << endl;

    return 0;
}