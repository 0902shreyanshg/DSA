#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Hero {

    // Properties
    int health;
};

class Enemy {

    // Properties
    string name;
    int health;
    char level;
};

class Empty {

    // No property
};

int main()
{
    // Hero type ka object Ramesh
    Hero ramesh;
    // Size should come as 4 , as only int health property is given
    cout << "Size: " << sizeof(ramesh) << endl;

    Enemy suresh;
    // Size should come as 32 , as only 
    cout << "Size: " << sizeof(suresh) << endl;
    
    Empty riseb;
    // Size will be 1 byte, for identification/Tracking
    cout << "Size: " << sizeof(riseb) << endl;

    return 0;
}