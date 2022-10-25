#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Global variable 
// BAD PRACTICE
// Anyone can change it
// SO BETTER USE REFERENCE VARIABLE CONCEPT
int score = 15;

void a(int& i){
    cout << i << endl;
    cout << score << " in a" << endl;
    // b(i);
}

void b(int& i){
    cout << i << endl;
    cout << score << " in b" << endl;
}
int main()
{
    int i = 5;
    // a(i);

    cout << score << "in main" << endl;
    {
        int i = 2;
        cout << i << endl;
    }

    cout << i << endl;

    return 0;
}