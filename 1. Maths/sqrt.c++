#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int sqrt(int x){
    if(x == 0 || x == 1){
        return x;
    }

    // cannot apply for loop here
    int i = 1;
    int result = 1;
    while(result <= x){
        i++;
        result = i * i;
    }
    return i - 1;
}

int main()
{
    int x = 11;
    cout << sqrt(x) << endl;
    return 0;
}