#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// cout IMPLEMENTATION IS DIFFERENT IN CASE OF CHAR ARRAY & INTEGER ARRAY

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // you need to give 6 because of null character; abcde accounts for 5
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl << endl;

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;
    cout << *c << endl;

// ERROR
    // char temp = "z";


    return 0;
}