#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

char MaxOccuringChar(string s){
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        // lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    // char finalAns = 'a' + ans;
    return 'a' + ans;
}

int main()
{
    string s;
    cin >> s;
    cout << MaxOccuringChar(s) << endl;
    return 0;
}