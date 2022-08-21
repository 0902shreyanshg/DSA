#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
    //FIRST REVERSE THEN COUT
    string s = "abcdefghijklmnopqrstuvwxvz";

    reverse(s.begin(), s.end());

    cout << "Reverse of the string: " << s;
    
    return 0;
}