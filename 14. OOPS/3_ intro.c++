#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

//including class hero from Hero.c++
//! ERROR
#include "2_Hero.c++"

using namespace std;

int main()
{
    // Hero type ka object Ramesh
    Hero ramesh;
    // Size should come as 4 , as only int health property is given
    cout << "Size: " << sizeof(ramesh) << endl;

    return 0;
}