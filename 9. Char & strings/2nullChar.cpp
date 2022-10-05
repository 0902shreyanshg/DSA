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
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    // null character
    name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;

    return 0;
}