#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;
 
int  Sum(int *arr /*arr[]*/, int size)
{
    cout << endl << "Size: " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += i[arr];
    }
    return sum;
}

int main()
{
    int first[4] = {1, 2, 3, 4};
    // Specific part of array for sum
    cout <<"Sum is: " << Sum(first + 1, 3) << endl;

    return 0;
}