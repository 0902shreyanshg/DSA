#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//TODO: A function with default arguments can be called with 2 or 3 or 4 arguments

int add(int x, int y, int z = 0, int w = 0) { 
    return (x + y + z + w); 
    }

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    cout << add(10, 20, 30, 40) << endl;
    return 0;
}