#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Chain macros
// Macros inside macros are termed as chain macros. 
// In chain macros first of all parent macro is expanded then the child macro is expanded. 
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 1000000000

int main()
{
    // INSTAGRAM is expanded first to produce FOLLOWERS. Then the expanded macro 
    // is expanded to produce the outcome as 138K. 
    // This is called the chaining of macros.
    cout << "Riseb has " << INSTAGRAM << " followers on instagram." << endl;
    return 0;
}