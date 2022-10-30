#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;

void SayDigits(int n, string arr[]){
    // Base case
    if(n == 0){
        return;
    }
    
    // processing
    int digit = n % 10;
    n = n / 10;
    cout << arr[digit] << " ";

    // recursive call
    SayDigits(n, arr);
    cout << endl << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    SayDigits(n, arr);
    return 0;
}