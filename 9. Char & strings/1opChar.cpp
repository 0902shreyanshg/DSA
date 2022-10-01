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

    // i/p: Shreyansh
    // o/p: Shreyansh

    // i/p: Shreyansh Gautam
    // o/p: Shreyansh  
    // BECAUSE cin DOESNOT EXECUTE "SPACE", "TAB (\t)", "NEWLINE", "ENTER"
    cout << "Your name is ";
    cout << name << endl;

    return 0;
}