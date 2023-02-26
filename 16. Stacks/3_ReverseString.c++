#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <Stack>

using namespace std;

int main()
{
    string str = "riseb";
    stack <char> s;

    //? Last in
    for(int i = 0; i < str.length(); i++) {
        char ch = str[i]; // to retrieve characters from the string
        s.push(ch);
    }

    //? First out
    string ans = "";

    while(!s.empty()) {
        char ch = s.top(); // to store characters in the string
        ans.push_back(ch);

        s.pop();
    }
    cout << "ans is: " << ans << endl;

    return 0;
}